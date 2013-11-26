soma=0
for i in xrange(1000):
	if (not i%3) or (not i%5):
		soma+=i;
print soma
