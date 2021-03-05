/* ex 1.12
print the input one word per line */

#include <stdio.h>

#define WRD 0
#define SPC 1

int main(){
    
    int c, state;
    state = SPC;
    
    while ((c = getchar()) != EOF){
        
        if (c == ' ' || c == '\t'){
            
            if (state == WRD){
                state = SPC;
                putchar('\n');
            }
        }
        else{
            
            state = WRD;
            putchar(c); 

        }
       
    }
}