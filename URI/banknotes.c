// Problema 1018 - Banknotes  do URI. 
//link:http://www.urionlinejudge.com.br/judge/en/problems/view/1018
#include<stdio.h>

int main(){
	int val;
	int notas[] = {100,50,20,10,5,2,1};
	scanf("%d",&val);
	int i;
	printf("%d\n",val);
	for ( i=0;i<7;i++){
		int aux = val /  notas[i];
				val= val%notas[i];
		printf("%d nota(s) de R$ %d,00\n",aux,notas[i]);	
	}
}
