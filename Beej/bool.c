#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void) {
    int x = 1;

    switch (x) { 
        case 1:
            printf("1\n");
            // Fall through!
        case 2: 
            printf("2\n");
            printf("Another\n");
            break; 
        case 3:
            printf("3\n");
            break;
    }

}