#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "mylib/mylib.h"

int main(void) {
    
    int num;
    printf("Enter the number of fibonacci sequence: ");
    scanf("%d", &num);

    printf("%d\n\n", fibonacciiterative(num));

    printf("%d", fibonaccirecursive(num, 1));

    return 0;
}