from math import sqrt
def retirar(vl,vi,l):
	if l!=2:
		v1,v2=[],[]
		for i in xrange(l):
			v1.append(vl[vi[i]-1])
		v2=vi[l:]	
		retirar(v1,v2,l/2)
	else:	
		v1,v2=[],[]
		v1.append(vl[vi[0]-1])
		v1.append(vl[vi[1]-1])
		print v1[vi[2]-1]	


line= raw_input()
while line!='0':
	v_l=line.split()
	vi_l,vi_ind=[],[]
	for i in xrange(len(v_l)):
		vi_l.append(int(v_l[i]))
	v_ind= raw_input().split()
	for i in xrange(len(v_ind)):
		vi_ind.append(int(v_ind[i]))
	#print vi_l
	#print vi_ind
	if len(vi_l)/2 !=1:
		retirar(vi_l,vi_ind,len(vi_l)/2)
	else:
		print vi_l[vi_ind[0]-1]
	line=raw_input()
	
