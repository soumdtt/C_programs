/*getting a character from the input and displaying it's integer representation */
/*ex 1.8 preamble */
#include <stdio.h>
int c;
int main(){
    while ((c=getchar()) != EOF){
        printf("\n%d\n", c);
    }    
}