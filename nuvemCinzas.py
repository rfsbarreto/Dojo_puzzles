from sys import stdin

readline = stdin.readlines()
lines = int(readline[0].split(' ')[0])
columns = int(readline[0].split(' ')[1])
data= readline[1:]

print(data)

print(lines,columns)

def getVectorPositions(data):
	aeroporto,nuvem=[],[]	
	for i in xrange(lines):
		for j in xrange(columns):
			if data[i][j]=='A' or data[i][j]=='A\n':
				aeroporto.append(i*j+j)
			elif data[i][j]=='*' or data[i][j]=='*\n':
				nuvem.append(i*j+j)
	return [aeroporto,nuvem]
