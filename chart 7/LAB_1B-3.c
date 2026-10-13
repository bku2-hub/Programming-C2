#pragma waring(disable:4996)
#include <stdio.h>

#define MAX_STUDENTS 50

void bubbleSort(int* arr,int size);

void bubbleSort(int*arr,int size) {
    for (int i = 0; i<size -1; i++) {
        for (int j = 0; j< size - i - 1; j++) {
            if (*(arr + j ) > *(arr + j + 1)){
                int temp = *(arr + j +1);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main()
{   
    int numStudents;
    printf("학생 수를 입력하세요. (최대 50명) :",MAX_STUDENTS);
    scanf("%d",&numStudents);

    if (numStudents > MAX_STUDENTS) {
        printf("입력 가능한 학생수를 초과 했습니다. \n");
        return 1;
    }

    int* gradesPointer;
    int grades[MAX_STUDENTS];
    gradesPointer = grades;

    for (int i = 0; i<numStudents; i++){
        printf("%d번 학생의 최종 성적을 입력하세요. : ",i+1);
        scanf("%d",gradesPointer + i);
    }

    bubbleSort(gradesPointer,numStudents);

    printf("\n정렬된 성적 :");
    for (int i = 0; i < numStudents; i++){
        printf("%d ",*(gradesPointer+i));
    }
    printf("\n\n최고성적 : %d\n",*(gradesPointer + numStudents -1));
    printf("최하 성적 : %d\n",*gradesPointer);

    return 0;
}