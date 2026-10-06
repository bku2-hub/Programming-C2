#include <stdio.h>

// 선택 정렬 함수
void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;

    // 1. 바깥쪽 루프: 정렬할 위치를 왼쪽부터 차례대로 지정 (마지막 원소 직전까지)
    for (i = 0; i < n - 1; i++) {
        min_idx = i; // 현재 범위에서 가장 작은 값의 인덱스를 i로 가정

        // 2. 안쪽 루프: 아직 정렬되지 않은 나머지 원소들 중에서 최솟값 탐색
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j; // 더 작은 값을 찾으면 최솟값의 인덱스(min_idx) 갱신
            }
        }

        // 3. 찾은 최솟값을 현재 위치(i)와 교환 (Swap)
        if (min_idx != i) {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}

int main() {
    // 정렬하지 않은 배열 선언
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]); // 배열의 전체 원소 개수 계산

    // 선택 정렬 함수 호출
    selectionSort(arr, n);

    // 결과 출력
    printf("선택 정렬 결과: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}