#include <stdio.h>

int main(void)
{
    int a , b , c;
    
    scanf("%d",&a);

    scanf("%d",&b);

    c = b;
    
    while(c > 0) {
        printf("%d\n", a*(c % 10));
        c /= 10;
    }
    printf("%d",a*b);
    

    return 0;
}