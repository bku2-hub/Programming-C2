#include <stdio.h>

int main()
{
    for(int i = 0; i < 6; i++) { 
        int a;
        if (i = 3) {
            a = i + 1;
        } else {
            a = 6 - i;
        }

        for(int j = 0; j < a; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}