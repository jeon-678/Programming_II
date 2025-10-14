/*
1. 등차수열은 앞의 항에 항상 일정한 수(공차)를 더하여 만들어가는 수열이다.
크기가 10인 정수형 배열에 대하여 등차수열로 값을 채우려고 한다.
첫 번째 항의 값과 공차(common difference)를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오.

실행결과
첫 번째 항? [ 1 ]
공차? [ 5 ]
등차수열: 1 6 11 16 21 26 31 36 41 46

*/

#include <stdio.h>

void input();
void common_difference(int a, int b);

int main(){

    input();

    return 0;
}

void input(){

    int a, d;

    printf("첫 번째 항? ");
    scanf("%d", &a);

    printf("공차? ");
    scanf("%d", &d);

    common_difference(a, d);
}

void common_difference(int a, int b){

    #define SIZE 10

    int arr[SIZE] = { 0 };

    printf("등차수열: ");

    for(int i = 0; i < SIZE; i++){
        arr[i] = a + (b * i);
        printf("%d ", arr[i]);
    }
}