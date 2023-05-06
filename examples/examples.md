If you wanted to try this out you can use `candump -i can0 | python3 parse-x180T-candump.py -pipe` to see what kind of basic device interaction you get.
Then you can filter to specific ids or exclude the noisy ones.  Then you can try out the different device interactions to see which one triggers which id.

You can also confirm or suggest different names for the devices in the Discussion.  You can also help me understand the type/cmd that is issues and what it means.


```
python3 parse-x180T-candump.py -h
usage: parse-x180T-candump.py [-h] [-i CANDUMPFILE | -pipe] [-f FILTER [FILTER ...]] [-n NEGFILTER [NEGFILTER ...]] [-t] [-qz] [-q1] [-qi] [-nc] [-o1] [-s]

optional arguments:
  -h, --help            show this help message and exit
  -i CANDUMPFILE, --candump CANDUMPFILE
                        filepath to candump file in pure log format (not ASC)
  -pipe, --candumppipe  pipe candump in pure log format to this script
  -f FILTER [FILTER ...], --filter FILTER [FILTER ...]
                        limit to only this ids (from or to) as HEX such as: 1E They can be space seperated multiple values
  -n NEGFILTER [NEGFILTER ...], --negfilter NEGFILTER [NEGFILTER ...]
                        remove this ids (from or to) as HEX such as: 1e They can be space seperated multiple values
  -t, --table           dump a table of the data value counts and ids that used them
  -qz, --quietzero      Skip lines which are all zero in the data (implies table)
  -q1, --quietone       Skip data in the table where their is only one instance (implies table)
  -qi, --quietinc       Skip data in the table if they appear as incremental (implies table)
  -nc, --nochange       Do not list the change information
  -o1, --onlyone        Show the items in the table which only appear once (implies table)
  -s, --summary         print a summary of the device types and the count (counting one each for From & To)
```
What does the output look like

Straight output
`[python3 ..\UnityX\parse-x180T-candump.py -i candump-2023-04-23_210058.log](23_210058.txt)`

Let's look only at the commands which are broadcast to the bus, ignore all the no data ones, and ignore incrementation data, show a table of data and summaries the different devices which talked and counts of those device interactions, drop the change 
`[python3 ..\UnityX\parse-x180T-candump.py -i candump-2023-04-23_210058.log -f  0 -s -t -nc -qz -qi ](23_210058-f_0-nc-s-t-qz-qi.txt)`

Let's look at the known devices, no change informaiton, no zero data, summary of data summary of devices
`[python3 ..\UnityX\parse-x180T-candump.py -i candump-2023-04-23_210058.log -f  b d f 1c -s -t -nc -qz](23_210058-f_b_d_f_1c-nc-s-t-qz.txt)`

Same but with zero data
`[python3 ..\UnityX\parse-x180T-candump.py -i candump-2023-04-23_210058.log -f  b d f 1c -s -t -nc](23_210058-f_b_d_f_1c-nc-s-t-qz.txt)`

Same but without the summaries
`[python3 ..\UnityX\parse-x180T-candump.py -i candump-2023-04-23_210058.log -f  b d f 1c -nc](23_210058-f_b_d_f_1c-nc.txt)`