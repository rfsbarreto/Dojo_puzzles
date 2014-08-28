#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

long long m[2][2];
long long fib[1500];
int** m2(long long m[2][2]){
	long long aux1=(m[1][0]*m[0][1] + m[0][0]*m[0][0])%1000;
	long long  aux2=(m[0][0]*m[0][1]+ m[0][1]*m[1][1])%1000;//d*(b+a)+c*b;
	long long  aux3=(m[1][0]*m[0][0]+m[1][1]*m[1][0])%1000;
	long long aux4=(m[1][0]*m[0][1]+m[1][1]*m[1][1])%1000;
	m[0][0]=aux1;	
	m[0][1]=aux2;
	m[1][0]=aux3;
	m[1][1]=aux4;
}
/*
void reset(int m[2][2]){
	m[0][0]=
}
*/

int** m1(long long m[2][2]){
	long long  aux1=(m[0][0] + m[0][1])%1000;
	long long aux2=(m[0][0])%1000;//d*(b+a)+c*b;
	long long aux3=(m[1][0]+m[1][1])%1000;
	long long  aux4=(m[1][0])%1000;
	m[0][0]=aux1;	
	m[0][1]=aux2;
	m[1][0]=aux3;
	m[1][1]=aux4;
}

/*    int M[2][2] = {{1,0}{0,1}}

    int fib(int n)
    {
    matpow(n-1);
    return M[0][0];
    }

    void matpow(int n)
    {
    if (n > 1) {
        matpow(n/2);
        M = M*M;
    }
    if (n is odd) M = M*{{1,1}{1,0}}
    }*/


long long  fib3(long long  n){
//	printf("i: %llu  \n",n);
	if (n>1){
		fib3(n/2);
		m2(m);
	}
	if ( n %2 ==1)
		m1(m);
//	while (i>1 && n>2){
		
	
				

	return (m[0][0])%1000;
}

long long fib1(long long n){
	if (n>2){
		fib[n]=(fib[n-1]+fib[n-2])%1000;
	}else	
		return 1;
	
}

long long getnum(char s[]){
	long long l=0;
	for (int i=0;i<strlen(s);i++){
//		printf("l1: %llu ",l);
		l*=2;
		l += (s[i]-'0');
		l%=1500;
	}
//	printf("\n");
	return l;
}

void pd(){
	for (int i=0;i<1500;i++){
///		long long aux=fib1(2);	
		fib[i]=fib1(i);;//fib3(i);
	//	printf("aux: %llu \n",fib3(1010110));//aux);;
	}	
}

int main(){
	memset(fib,0,sizeof(fib));
	pd();
	//printf(" %llu %llu \n",fib3(3),fib[10]);
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		memset(m, 0, sizeof(m));
		m[0][0]=1;m[1][1]=1;
		char inst[10000]; //instance
		scanf("%s",inst);
//		printf("%s\n",inst);
		long long n_term = getnum(inst);//strtol(inst,NULL,2)%1500;
//		printf("n:%llu %llu\n",strlen(inst),n_term);
		int a=1,b=0,atual;
		atual=fib[n_term];
/*		for(int j=1;j<=n_term;j++){
			atual=(a+b)%1000;
			a=b;
			b=atual;
		}*/
//		char resp[3];
//		sprintf(resp,"%d",atual);
		printf("%03d\n",atual);		
	}


}
