from sys import argv
from os.path import exists

script, from_file, to_file = argv
# Da fix --> 1 dong
open(to_file, 'w').write(open(from_file).read())
