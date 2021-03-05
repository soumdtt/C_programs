/* program on 2 on pg. 18 */
/* no on imput characters in stream */
#include <stdio.h>
int main(){
    double count;
    for (count = 0; getchar() != EOF; ++count)
        ;
    printf("%.0f\n", count);
}