#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(int n);

int main(int argc, char **argv) {
    for(int i = 2, c = 0;; i++) {
        if(is_prime(i)) {
            c++;
        }

        if(c == 10001) {
            printf("%d\n", i);
            break;
        }
    }
}

bool is_prime(int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}