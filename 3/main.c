#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int n);
int next_prime(int p);

int main(int argc, char **argv) {
    int greatest = 1;

    for(long i = 11, div = 11; i < 8462696833; i++) {
        if(!is_prime(i)) {
            continue;
        }

        if(600851475143 % i == 0) {
            greatest = i;
        }
    }

    printf("%d\n", greatest);
}

bool is_prime(int n) {
    for(int i = 2; i < (int)sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

int next_prime(int p) {
    while(true) {
        p++;
        if(is_prime(p)) {
            return p;
        }
    }
}