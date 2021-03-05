/* input and output streams
ex 1.6 */
#include <stdio.h>
int main(){
    int c;
    while (c = (getchar() != EOF))
        putchar(c);
}