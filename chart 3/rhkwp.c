#include <stdio.h>

int main(void)
{
    int a;

    scanf("%d", &a);

    printf("%s", (a%2==0)?"Even":"Odd");
    
    return 0;
}