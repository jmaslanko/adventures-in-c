#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool x = false;
    int y = 0;
    int i;
    int j;

    for (i = 0, j = 5; i < 5; i++, j++) {
        printf("i: %d, j: %d\n", i, j);
    }
}