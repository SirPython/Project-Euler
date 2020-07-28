#include <stdio.h>

void fib(int *n1, int *n2);

int main(int argc, char **argv) {
    int n1 = 1;
    int n2 = 1;
    int sum = 0;

    while(n2 < 4000000) {
        fib(&n1, &n2);
        if(n2 % 2 == 0) {
            sum += n2;
        }
    }

    printf("%d\n", sum);
}

void fib(int *n1, int *n2) {
    int temp = *n2;

    *n2 = *n1 + *n2;
    *n1 = temp;
}