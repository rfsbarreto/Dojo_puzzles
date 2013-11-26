# Project Euler problem 2. http://projecteuler.net/problem=2
fib_n1=1
fib_n2=1
fib_atual,soma=0,0
while (fib_atual<4000000):
	fib_atual=fib_n1+fib_n2
	if (not(fib_atual%2)):
		soma=soma+fib_atual
	fib_n2=fib_n1	
	fib_n1=fib_atual
print(soma)

