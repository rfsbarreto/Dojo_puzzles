#include<stdio.h>


int main(){
	int m,t;
	scanf("%d %d",&m,&t);
	char* musica[m];
	char* padrao[t];
	int i;
	for ( i=0;i<m;i++){
		char* t=malloc(2*sizeof(char));
		scanf("%s",t);
		musica[i]=t;
	}
	for (i=0;i<t;i++){
		char* t=malloc(2*sizeof(char));
		scanf("%s",t);
		scanf("%s",padrao[i]);
	}
	printf("%s ",musica[0]);
}
