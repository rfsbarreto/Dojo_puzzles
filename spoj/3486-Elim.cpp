#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;


//int max = 
//char v[

void retirar(int vl[], int vi[],int l,int m){
//	printf("l:%d %d\n",l,m);
	if ( l !=2){
		int v1[l];
		int v2[l-1];
		for (int i=0;i<l;i++){
			v1[i]= vl[vi[m+i]-1];
		}
		m+=l;
		retirar(v1,vi,l/2,m);
	}else{
		printf("%d\n",vi[m+2]==1?vl[vi[m]-1]:vl[vi[m+1]-1]);
	}
}

int main(){
	printf("%d\n\n",sizeof(int));
	char* aux=(char*)malloc(10*1024*sizeof(char) );
	scanf("%[^\n]\n",aux);
	int a=0;
	while(strcmp(aux,"0")!=0){
		char* token;
//		printf("%s\n",aux);
		int vi_l[1024],v_ind[1024];
		int ind=0;
		char* a=aux;
		while ((token = strsep(&a," "))!= NULL && ind<1025){
//			vet[ind]= malloc(sizeof(tipo));
			vi_l[ind]=atoi(token);
		//	vet[ind].len= strlen(token);
			ind++;
		}
		char* aux1=(char*) malloc(1024*sizeof(char));
		scanf("%[^\n]\n",aux1);
//		printf("aux1: %s\n",aux1);
		int ind1=0;
		while((token=strsep(&aux1," "))!=NULL && ind1<ind){
			v_ind[ind1]=atoi(token);
			ind1++;
		}
//		printf("ind: %d %d\n",ind,ind1);
		if (ind==1)
				printf("%d\n",vi_l[0]);
		else
			if (ind/2!=1){
				retirar(vi_l,v_ind,ind/2,0);
			}else
				printf("%d\n",vi_l[v_ind[0]-1]);
		free(aux1);
//		char* aux=(char*)malloc(5*1024*sizeof(char) );

		scanf("%[^\n]\n",aux);
//		printf("oi\n");
//		printf("%s\n",aux);	
		a++;
	}


}
