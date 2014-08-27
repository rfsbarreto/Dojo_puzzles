#include <stdio.h>

int main(void) {
	// your code goes here
	 char mystring[100] ;
     int i=0,j;
    for (j=0;j<3;j++){
       while ( scanf("%[a-zA-Z0-9] ",mystring) != EOF && i<20){
	  //if ( fgets (mystring , 100 , stdin) != NULL )
       puts (mystring);
	i++;
     }
	printf("a\n");
    }
	return 0;
}
