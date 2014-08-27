//https://www.urionlinejudge.com.br/judge/en/problems/view/1520
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
	int boxes;
	while (scanf("%d ",&boxes)!=EOF){
		
		int i;
		int v_box[100*100];
		int ind=0;
		for (i=0;i<boxes;i++){
			int min,max;
			scanf("%d %d", &min,&max);
		   	for (int j=min;j<=max;j++)
				v_box[ind++]=j;
		}
		int num;
//		for (i=0;i<ind;i++)
//			printf(" %d ",v_box[i]);
		scanf("%d ",&num);
		int n_menor=0,n_igual=0;
		for (i=0;i<ind;i++){
			if (v_box[i]<num)
				n_menor++;
			else
				if (v_box[i]==num)
					n_igual++;
		}
		if (n_igual!=0)
			printf("%d found from %d to %d\n",num,n_menor,n_menor+n_igual-1);
		else
			printf("%d not found\n",num);
	}

}
