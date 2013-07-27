from sys import stdin

readline = stdin.readlines()
for i in xrange(len(readline)):
	readline[i]=readline[i].split(' ')

lines = int(readline[0][0])
columns = int(readline[0][1])
data= readline[1:]


def getVectorPositions(data):
	airports,clouds=[],[]	
	for i in xrange(lines):
		for j in xrange(columns):
			if data[i][j]=='A' or data[i][j]=='A\n':
				airports.append(i*columns+j)
			elif data[i][j]=='*' or data[i][j]=='*\n':
				clouds.append(i*columns+j)
	return [airports,clouds]


def getMinDistance(airport,vet_clouds):
	min_dis=lines+columns
	for i in vet_clouds:
		j=abs(airport-i)
		temp_dis = j//columns+abs(airport%columns- i%columns)
		if (temp_dis<min_dis):
			min_dis=temp_dis
	return min_dis
		
positions_in_integer=getVectorPositions(data)
airports=positions_in_integer[0]
clouds=positions_in_integer[1]


