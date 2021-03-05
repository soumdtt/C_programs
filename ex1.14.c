/* ex 1.14 counting the frequency of characters */

#include <stdio.h>

#define MIN 32 /*range of printable ascii characters */
#define MAX 125 

int main(){
    
    int c, i, range;
    range = MAX - MIN + 1;
    int count[range];
    
    for (i = 0; i <= range; i++ ){
        
        count[i] = 0;
    }
    
    while ((c = getchar()) != EOF){
        
        if (c >= 32 && c<= 125){
            
            ++count[c-32];
        }
        
    }
    
    /*print the character count*/
    
    for (i=0; i<= range; i++){
        
        if (count[i] > 0)
        printf("%c  %d\n", i+32, count[i]);
    }
    
    
}