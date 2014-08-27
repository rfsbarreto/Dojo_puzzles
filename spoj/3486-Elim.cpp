#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;


const int max = 1e6;
const int c_max= 1030;

char line[max];
int vi_l[c_max],v_ind[c_max];




void retirar(int* vl, int* vi,int l,int m){
	
	if ( l >=2){
		int v1[l];
		int v2[l-1];
		for (int i=0;i<l;i++){
			v1[i]= vl[vi[m+i]-1];
		}
		m+=l;
		retirar(v1,vi,l/2,m);
	}else{
		printf("%d\n",vl[vi[m]-1]);
	}
}

//tokenizer
void tknzr(char* vl,int* vi,int* s){
	char* token;	
	char* a= (char*) malloc(max*sizeof(char));
	strcpy(a,vl);

	while ((token = strsep(&a," "))!= NULL && *s<1025){
			vi[(*s)++]=atoi(token);
	}
}

int  main(){
	while(scanf("%[^\n]\n",line) && strcmp(line,"0")!=0){
		int size=0;
		tknzr(line,vi_l,&size);
		scanf("%[^\n]\n",line);
		int aux=0;
		tknzr(line,v_ind,&aux);
		if (size==1){
				printf("%d\n",vi_l[0]);
		}else
			retirar(vi_l,v_ind,size/2,0);
	}


}
