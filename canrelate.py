import cantools
from pprint import pprint

db = cantools.database.load_file('./candump-2023-04-23_205750.log')
db.messages

