#include <stdio.h>

int main(void) {
    int cnt[6] = {0};
    int i, n;

    for (i = 0; i < 10; i++) {
        scanf("%d", &n);
        cnt[n - 1]++;
    }

    for (i = 0; i < 6; i++) {
        printf("%d : %d&n",i + 1, cnt[i]);
    }

    return 0;
}
