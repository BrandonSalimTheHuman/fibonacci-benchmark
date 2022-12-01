#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "mylib/mylib.h"

int main(void) {
    
    int num;

    printf("Enter the number of fibonacci sequence: ");

    scanf("%d", &num);

    for (int i = 0; i > -1; ++i)
    {
    	printf("%d\n\n", fibonacciiterative(num));
    }
    
    return 0;
}