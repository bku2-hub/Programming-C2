#include <stdio.h>

// 버블 정렬 함수
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    
    // 1. 바깥쪽 루프: 정렬을 수행할 전체 횟수 제어 (배열 크기 - 1 만큼 반복)
    for (i = 0; i < n - 1; i++) {
        
        // 2. 안쪽 루프: 인접한 원소들을 비교
        // 이미 정렬된 뒷부분(i만큼)은 제외하고 비교합니다.
        for (j = 0; j < n - i - 1; j++) {
            
            // 3. 앞의 값이 뒤의 값보다 크면 서로 자리를 바꿈 (Swap)
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];        // 값을 임시 변수에 보관
                arr[j] = arr[j + 1];  // 뒤의 값을 앞으로 이동
                arr[j + 1] = temp;    // 보관해둔 값을 뒤로 이동
            }
        }
    }
}

int main() {
    // 정렬하지 않은 배열 선언
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]); // 배열의 전체 원소 개수 계산

    // 정렬 함수 호출
    bubbleSort(arr, n);

    // 결과 출력
    printf("정렬된 배열: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}