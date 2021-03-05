/*mirroring input from keyboard to console 
preamble to ex 1.9 */
#include <stdio.h>
int main(){
    int c, n;
    n = 0;
    while((c = getchar()) != EOF){
        n++;
        if (n == 1){
            putchar('\n');
        }
        putchar(c);
    }
    
}