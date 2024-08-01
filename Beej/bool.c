#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void) {
    double d = 81283501;
    double r = 74223975;
    double total = d + r;

    double d_per = d/total;
    printf("Democrat percent: %lf\n", d_per);


}