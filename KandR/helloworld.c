#include <stdio.h>

int main() {
    int c, i, nwhite, nother;
    int apple[10];

    nwhite = nother = 0;

    for (i = 0; i < 10; ++i) {
        apple[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ++apple[c-'0'];
        }
        else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
        }
        else {
            ++nother;
        }
    }

    printf("digits = ");
    for (i = 0; i < 10; ++i) {
        printf("%d", apple[i]);
    }
    printf(", white space = %d, other = %d\n", nwhite, nother);
}