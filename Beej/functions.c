#include <stdio.h>

void increment(int *p){
    *p = *p + 1;
}

int main(void) {
    int i = 10;
    int *j = &i;

    printf("i is %d\n", i);
    printf("i is also %d\n", *j);

    increment(j);

    printf("j is now %p\n", j);
    printf("i is now %p\n", &i);
}