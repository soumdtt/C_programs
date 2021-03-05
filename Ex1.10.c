/*ex 1.10
replaces tab with \t, backspace as \b and \ as \\*/
#include <stdio.h>
int main(){
    int c, n;
    n = 0;
    while ((c = getchar()) != EOF){
        n++;
        if (n == 1){
            putchar ('\n');
        }
        if (c == '\t'){
            printf("\\t");
        }
        if (c == '\b'){
            printf("\\b ");
        }
        if (c == '\\'){
        	printf("\\");
        }
        
        putchar(c);
    }
    
}