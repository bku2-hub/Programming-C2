#include <stdio.h>

// 삽입 정렬 함수
void insertionSort(int arr[], int n) {
    int i, j, key;

    // 1. 두 번째 원소(인덱스 1)부터 시작하여 마지막 원소까지 반복
    for (i = 1; i < n; i++) {
        key = arr[i]; // 이번에 정렬할 대상 값을 임시로 저장 (key)
        j = i - 1;    // key 바로 앞의 원소 인덱스부터 왼쪽으로 탐색 시작

        // 2. 왼쪽으로 이동하면서 key보다 큰 원소들을 오른쪽으로 한 칸씩 밀어냄
        // j가 0 이상이고, 앞의 값이 key보다 크면 계속 반복
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // 큰 값을 오른쪽으로 이동
            j--;                 // 더 왼쪽으로 이동하여 비교 준비
        }

        // 3. 자리를 찾았거나 맨 끝에 도달했을 때, 빈 자리에 key 값을 삽입
        arr[j + 1] = key;
    }
}

int main() {
    // 정렬하지 않은 배열 선언
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // 배열의 전체 원소 개수 계산

    // 삽입 정렬 함수 호출
    insertionSort(arr, n);

    // 결과 출력
    printf("삽입 정렬 결과: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}