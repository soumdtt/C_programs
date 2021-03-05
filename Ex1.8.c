/*ex 1.8 count blacks spaces and newlines */
#include <stdio.h>
int main(){
    int c, nl, spc, tab;
    nl = 0;
    spc = 0;
    tab = 0;
    while((c = getchar()) != EOF){
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++tab;
        if (c == ' ')
            ++spc;
    }
    printf("\nThe no. of tabs: %d, no. of spaces: %d, no. of newlines: %d\n", tab, spc, nl);
}