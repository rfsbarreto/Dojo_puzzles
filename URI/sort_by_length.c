//https://www.urionlinejudge.com.br/judge/en/problems/view/1244

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include<algorithm>
#include <algorithm>
using namespace std;
typedef struct tipo{
	char* palavra;
	int len;
} tipo;

int compare ( const tipo &a, const tipo &b){
//	tipo temp1;
//	tipo temp2;
//	temp1= (tipo) a;//(*a).len;
//	temp2=(tipo) b; //(*b).len;
	if ((b).len>=(a).len)
		return 0;
	else 
		return 1;
}

int main(){
	int n,i;
	scanf("%d ",&n);
	for (i=1;i<=n;i++){
		tipo* vet=(tipo*)  malloc(50*sizeof(tipo));
		char* aux=(char*) malloc(50*52*sizeof(char));
		 int ind=0;
		scanf("%[^\n]" ,aux);
		char* token;
		while ((token = strsep(&aux," "))!= NULL  && ind<51){
//			vet[ind]= malloc(sizeof(tipo));
			vet[ind].palavra=token;
			vet[ind].len= strlen(token);
			ind++;
		}
		const int temp= ind;
		sort(vet,vet+temp,compare);		
		int k=0;
		for (k;k<ind;k++)
			printf("%s ",vet[k].palavra);
		printf("\n");
		getchar();	
		free(vet);
		free(aux);
	}
	return 0;
}
