import sys, json
import numpy as np

data = {} 


def parseData (data):
	formattedData = {}
	for canId, value in data.items():
		timestampsLength = len(value['timestamps'])

		if (timestampsLength > 1):
			averagePeriod = int(np.average(np.diff(np.array(value['timestamps'])))*10)
		else:
			averagePeriod = 0

		possibleValues = [[],[],[],[], [], [], [], []]
		for frame in value['frames']: 
			splitInTwos = [frame[i:i+2] for i in range(0, 16, 2)]
			for index, pair in enumerate(splitInTwos):
				if (pair not in possibleValues[index]):
					possibleValues[index].append(pair)

		formattedData[canId] = {
			'occurencies': timestampsLength,
			'averagePeriod': averagePeriod,
			'possibleValues': possibleValues
		}

	return formattedData

def parseLine (line):
	line = line.replace('\n', '').split(' ')
	
	timestamp = int(line[0][1:14].replace('.', '')) # we don't need more than ms 
	canSplit = line[2].split('#')
	canId = canSplit[0]
	canData = canSplit[1]

	if canId in data:
		data[canId]['frames'].append(canData)
		data[canId]['timestamps'].append(timestamp)
	else:
		data[canId] = {'frames': [canData], 'timestamps': [timestamp]}

def parseFile (file, jsonOutput):
	global data
	try:
		with open(file) as f:
			lines = f.readlines()
			for line in lines:
				parseLine(line)
			formattedData = parseData(data)
			
			if (jsonOutput):
				print(json.dumps(formattedData))
				return True
			
			for canId, data in sorted(formattedData.items()):
				for x in range(3):
					print(' ')
				print('CAN ID: ' + canId)
				print('    Occurencies: ' + str(data['occurencies']))
				if (data['occurencies'] > 1):
					print('    Average time between occurencies: ' + str(data['averagePeriod']) + 'ms')
				print('    Possible values:')
				for index, value in enumerate(data['possibleValues']):
					print('        Data ' + str(index+1) + ': ' + ','.join(value))

	except EnvironmentError:
		print('[!] Failed to read file!')
		return sys.exit(1)
	except KeyboardInterrupt:
		print('[!] Quitting...')
		return sys.exit(0)

if __name__ == '__main__':
	if (len(sys.argv) < 2):
		print('[!] Usage: python simple-candump-parser.py [filename] [json]')
		print('    If you type \'json\' (without the quotes) after filename, you\'ll get json output')
		sys.exit(1)

	jsonOutput = False

	if (len(sys.argv) > 2):
		if (sys.argv[2] == 'json'):
			jsonOutput = True

	parseFile(sys.argv[1], jsonOutput)
	sys.exit(0)