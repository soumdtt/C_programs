/* temperature conversion with functions 
ex 1.15 */

#include <stdio.h>

#define START

float fahr_cel (float fahr);

int main(){
    
    int i, start, stop, step;
    start = 0;
    stop = 300.0;
    step = 20.0;

    printf("Table of Fahrenheit to Celcius conversions\n");
    printf("%10s %20s", "Fahrenheit", "Celcius");
    
    for (i = start; i<= stop; i = i + step)
        
        printf("%10.0d %20.1f\n", i, fahr_cel(i));
    
    return 0;
    
}

/*Fahrenheit to Celcius conversion function */
float fahr_cel (float fahr){
    
    int cel;
    
    cel = (5.0/9.0) * (fahr - 32);
    return cel;
} 