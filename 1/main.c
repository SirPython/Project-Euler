#include <stdio.h>

int main(int argc, char **argv) {
    int three_counter = 3;
    int five_counter  = 5;

    int sum = 0;

    for(int i = 3; i < 1000; i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("%d\n", sum);
}