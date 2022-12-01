#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "mylib/mylib.h"
#include <time.h>

int main(void) {
    
    int num;
    printf("Enter the number of fibonacci sequence: ");
    scanf("%d", &num);
    
    float startTime = (float)clock()/CLOCKS_PER_SEC;

    printf("%d\n", fibonaccirecursive(num, 1));

    float endTime  = (float)clock()/CLOCKS_PER_SEC;
    printf("Time elapsed: %f s\n",endTime - startTime);

    return 0;
}