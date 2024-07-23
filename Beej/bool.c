#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool x = false;
    int y = 0;
    int z = 0;

    z += y > 5? 10: 3;

    if (y) {
        printf("y is true!\n");
    }

    printf("The number %d is %s\n", z, z % 2==0? "even": "odd");
}