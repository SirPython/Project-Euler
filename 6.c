#include <stdio.h>

int main(int argc, char **argv) {
    int sum_of_squares = 0;
    for(
        int i = 1,
        j = 3,
        k = 1;

        k < 100;

        i += j,
        j += 2,
        k++,
        sum_of_squares += i
    );

    int square_of_sum = ((100 * 99) / 2) * ((100 * 99) / 2);

    printf("%d\n", sum_of_squares + square_of_sum);
}