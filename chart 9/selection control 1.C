#include <stdio.h>

int main()
{
    int a = 0;

    scanf("%d", &a);

    if (a > 10) {
        printf("%d\n", a);
        printf("Larger than 10.\n");
    }
    else {
        printf("%d\n", a);
    }
    
    return 0;
}