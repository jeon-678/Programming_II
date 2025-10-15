/*
2. 정수를 매개변수로 전달해서 정수에 있는 모든 숫자의 합을 구하는 sum_of_digits 함수를 재귀 함수로 정의하시오.

실행 결과
정수? [ 12345 ]
sum of digits: 15
정수? [ 1000000 ]
sum of digits: 1
정수? [ 0 ]
*/

#include <stdio.h>

int main(){

    int input;

    while (1)
    {
        printf("정수? ");
        scanf("%d", &input);
    }
    

    return 0;
}

int sum_of_digits(int num){
    

    return sum_of_digits(num);
}