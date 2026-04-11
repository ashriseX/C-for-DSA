import re
data = open("blindspot_leak.pcapng", "rb").read()
matches = re.findall(b'MCS\{[^}]+\}', data)
print(matches)