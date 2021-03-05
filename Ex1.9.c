/*mirroring input from keyboard to console 
preamble  to ex 1.9 */
#include <stdio.h>
int main(){
    int c, n, cSpc;
    n = 0;
    cSpc = 0;
    while((c = getchar()) != EOF){
        n++;
        if (n == 1){
            putchar('\n');
        }
        if (c != ' '){
            putchar(c);
            cSpc = 0;
            
        }
        if (c == ' '){
            ++cSpc;
            if (cSpc < 2){
                putchar(' ');
            }
        }
    }
    
}