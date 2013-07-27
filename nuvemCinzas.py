from sys import stdin

readline = stdin.readlines()
for i in xrange(len(readline)):
	readline[i]=readline[i].split()
print(readline)
lines = int(readline[0][0])
columns = int(readline[0][1])
data= readline[1:]

print(data)

print(lines,columns)

def getVectorPositions(data):
	aeroporto,nuvem=[],[]	
	for i in xrange(lines):
		for j in xrange(columns):
			if data[i][j]=='A' or data[i][j]=='A\n':
				aeroporto.append(i*columns+j)
			elif data[i][j]=='*' or data[i][j]=='*\n':
				nuvem.append(i*columns+j)
	return [aeroporto,nuvem]

print(getVectorPositions(data))
