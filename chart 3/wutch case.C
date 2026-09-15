#include <stdio.h>

int main(void)
{
    int ppap;

    scanf("%d",&ppap);

    if (ppap <= 12) {
        switch (ppap)
        {
        case 2:
            printf("28");
            break;
        
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30");
            break;

        default:
            printf("31");
            break;
        } 
    }
    else 
        printf("월 단위로 입력하세요.");
    


    return 0;
}