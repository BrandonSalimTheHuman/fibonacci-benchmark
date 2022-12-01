#include <stdio.h>
#include <stdbool.h>

int fibonacciiterative(int n) {

	int a = 0;
    int b = 1;
    
    if (n == 1) {
        return a;
    }
    
    else {

       	printf("%d\n", a);

        for (int i = 2; i < n; i++){
            int c = a + b;
            a = b;
            printf("%d\n", b);
            b = c;
        }
        return b;
    }
}


int fibonaccirecursive(int n, bool p){

	if (n == 0){
		return -1;
	}

	else if(n == 1){
		return 0;
	}

	else if(n == 2) {
		if (p == 1)
		{
			printf("%d\n", 0);
		}
		return 1;
	}

	else {
		int out = fibonaccirecursive(n - 1, p) + fibonaccirecursive(n - 2, 0);
		if (p == 1)
		{
			printf("%d\n", fibonaccirecursive(n - 1, 0));
		}
		return out;
	}

}