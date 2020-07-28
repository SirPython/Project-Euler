#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_palindrome(int n);

int main(int argc, char **argv) {
    int max = 0;

    for(int i = 0; i < 1000; i++) {
        for(int j = 0; j < 1000; j++) {
            int prod = i * j;
            if(is_palindrome(prod) && prod > max) {
                max = prod;
            }
        }
    }

    printf("%d\n", max);
}

bool is_palindrome(int n) {
    char str[7];
    snprintf(str, 7, "%d", n);
    int len = strlen(str);

    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - 1 - i]) {
            return false;
        }
    }

    return true;
}