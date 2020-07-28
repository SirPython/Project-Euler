#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/**
 * Given N
 * 1. Find the first prime number P that N is divisible by. The greatest prime
 *    factor can be no greater than N / P.
 * 2. If P is prime, that is the greatest prime factor.
 * 3. If not, set N = P and repeat from step 1.
 */

bool is_prime(unsigned long long n);
unsigned long long least_prime_factor(unsigned long long n);

int main(int argc, char **argv) {
    unsigned long long num = 600851475143;
    while(true) {
        puts("work?");
        unsigned long long fac = num / least_prime_factor(num);

        if(is_prime(fac)) {
            printf("%llu is prime\n", fac);
            break;
        } else {
            num = fac;
        }
    }
}

bool is_prime(unsigned long long n) {
    for(unsigned long long i = 2; i <= (unsigned long long)sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

unsigned long long least_prime_factor(unsigned long long n) {
    for(unsigned long long i = 2; i < n; i++) {
        if(is_prime(i) && n % i == 0) {
            return i;
        }
    }
    return -1;
}