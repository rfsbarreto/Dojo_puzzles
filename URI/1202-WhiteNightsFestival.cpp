#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

long long fib[1500];


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
	fib[0]=1;
	fib[1]=1;
	for (int i=2;i<1500;i++){
		fib[i]=(fib[i-1]+fib[i-2])%1000;//fib1(i);
	//	printf("aux: %llu \n",fib3(1010110));//aux);;
	}	
}

int main(){
	pd();
	//printf(" %llu %llu \n",fib3(3),fib[10]);
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		char inst[10000]; //instance
		scanf("%s",inst);
//		printf("%s\n",inst);
		long long n_term = getnum(inst);//strtol(inst,NULL,2)%1500;
//		printf("n:%llu %llu\n",strlen(inst),n_term);
		int a=1,b=0,atual;
		atual=fib[n_term-1];
		printf("%03d\n",atual);		
	}


}
