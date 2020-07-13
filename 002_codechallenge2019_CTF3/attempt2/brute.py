from string import printable
from string import punctuation
import subprocess

keys = [x for x in printable if punctuation.find(x) == -1]
response = {}

tries = []

for k1 in keys:
    for k2 in keys:
        for k3 in keys:
            tries.append(k1+k2+k3)

idx = 0

for k in tries:
    idx += 1
    if idx % 100 == 0:
        print("{0}/314432".format(idx))
    msg = '"' + k + '"'
    result = subprocess.check_output(
        ['echo', msg, '|', '.\ctf.exe'], shell=True
    ).decode('UTF-8')
    if response.get(result) == None:
        response[result] = []
    response[result].append(msg)

f = open("brute.txt", "w")
for k in response.keys():
    f.write("KEY> " + k + "\n")
    for r in response[k]:
        f.write(r + '\n')
