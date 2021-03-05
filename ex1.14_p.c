/*preamble to ex. 1.14 
echo a character from keyboard to console along with its ascii eqv.*/

#include <stdio.h>

int main(){
    
    int c;
    while ( (c = getchar()) != EOF ){
        
        printf("%d  %c\n", c, c);
    }
}