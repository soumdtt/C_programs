/* histograms in C 
Ex 1.13. */

#include <stdio.h>

#define MAXLENGTH 20
#define OUT 0
#define IN 1

int main(){

	int count[MAXLENGTH -1];
	int i, j, len, c, status;

	len = 0;
	status = OUT;

	for (i = 0; i <= MAXLENGTH-1; i++)
		count[i] = 0;

	while (( c = getchar() ) != EOF ){

		if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ){

			if (status == OUT)

				status = IN;

			++len;

		}

	    else {


	    	 if (status == IN){

	    	 		++count[ len - 1 ];
					status = OUT; 
					len = 0;

				}



	    	 }   /*just exits a work */

	}

	/*print the histogram*/

	for (i = 0; i <= MAXLENGTH-1; i++){

		printf("%3d",i+1);

		for (j = 0; j<= count[i] - 1; j++)
			printf(" *");

		printf("\n\n");
	}

}


