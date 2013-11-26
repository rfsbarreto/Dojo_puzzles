## Dojopuzzles problem:  http://dojopuzzles.com/problemas/exibe/nuvem-de-cinzas/
from sys import stdin

readline = stdin.readlines()
data= readline[1:]

lines = int(readline[0].split()[0])
columns = int(readline[0].split()[1])

def getVectorPositions(data):
	aeroporto,nuvem=[],[]	
	for i in xrange(lines):
		for j in xrange(columns):
			if data[i][j]=='A' or data[i][j]=='A\n':
				aeroporto.append(i*columns+j)
			elif data[i][j]=='#' or data[i][j]=='#\n':
				nuvem.append(i*columns+j)
	return [aeroporto,nuvem]

def getMinDistanceClouds(aeroporto,nuvem):
	vetorDistanciaMin=[]
	for i in aeroporto:
		dist=[]
		for j in nuvem:
			dis= abs(i//columns-j//columns) + abs(i%columns-j%columns)
			dist.append(dis)
		vetorDistanciaMin.append(min(dist))
	return vetorDistanciaMin
	
temp=getVectorPositions(data)
aeroporto=temp[0]
nuvem=temp[1]
a=getMinDistanceClouds(aeroporto,nuvem)
print(str(min(a))+" "+str(max(a)))
