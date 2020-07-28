#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv) {
    for(int i = 20;; i++) {
        bool pass = true;
        for(int j = 1; j <= 20; j++) {
            if(i % j != 0) {
                pass = false;
                break;
            }
        }

        if(!pass) {
            continue;
        }

        printf("%d\n", i);
        break;
    }
}