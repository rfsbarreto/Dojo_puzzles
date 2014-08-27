#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;


/*void resolve(int popA,int popB,double txA,double txB,int tempo){
	if(trunc(popA*pow((1+txA/100),tempo))==trunc(popB*pow((1+txB/100),tempo))){
		printf("%d anos.\n",tempo+1);
		return;
	}
	printf("%d ",tempo);

	printf("pop: %lf %lf\n",trunc(popA*pow((1+txA/100),tempo)),trunc(popB*pow((1+txB/100),tempo)));
	if (trunc(popA*pow(txA,tempo))<trunc(popB*pow(txB,tempo))){
		if (trunc(popA*pow((1+txA/100),tempo+1))>trunc(popB*pow((1+txB/100),tempo+1)))
			printf("%d anos.\n",tempo+1);
		else
			resolve(popA,popB,txA,txB,(100+tempo)/2);
	}else{
		if (trunc(popA*pow((1+txA/100),tempo-1))<trunc(popB*pow((1+txB/100),tempo-1)))
			printf("%d anos.\n",tempo);
		else
			resolve(popA,popB,txA,txB,(tempo)/2);

	}
}
*/
int main(){
	int n_casos;
	scanf("%d ",&n_casos);
	for (int i=0;i<n_casos;i++){
		float  popA,popB;
		double txA,txB;
		scanf("%f %f %lf %lf ",&popA,&popB,&txA,&txB);
//		printf("%d %f %.2f %.2f\n\n",popA,txB,trunc( popA*pow((1+txA/100),100)),pow(txB,100));
		if (trunc(popA*pow((1+txA/100),100))<trunc(popB*pow((1+txB/100),100)))
			printf("Mais de 1 seculo.\n");
		else
			for (int j=1;j<=100;j++){
			  popA= trunc(popA*(1+txA/100));
			  popB= trunc(popB*(1+txB/100));
			  if (popA>popB){
				printf("%d anos.\n",j);	
			  	break;
                          }
			}	
			//resolve(popA,popB,txA,txB,50);
	}

}
