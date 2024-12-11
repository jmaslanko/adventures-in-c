#include <stdio.h>

#define MAXLINE 1000

int number = 5;
int mod = 2;
int main() {
    printf("%d mod %d = %d\n", number, mod, number % mod);
}