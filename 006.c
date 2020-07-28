#include <stdio.h>

int main(int argc, char **argv) {
    int sum_of_squares = 0;
    for(int i = 1; i <= 100; i++) {
        sum_of_squares += i * i;
    }

    int square_of_sum = ((100 * 101) / 2) * ((100 * 101) / 2);

    printf("%d\n", square_of_sum - sum_of_squares);
}