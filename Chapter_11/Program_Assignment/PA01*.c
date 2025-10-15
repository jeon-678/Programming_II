/*
1. 정수를 매개변수로 전달해서 정수에 있는 숫자의 개수를 구하는 count_digits 함수를 재귀 함수로 정의하시오.

실행 결과
정수? [ 12345 ]
count of digits: 5
정수? [ 1000000 ]
count of digits: 7
정수? [ 0 ]
*/

#include <stdio.h>

int count_digits(int num);

// int count = 0;

int main(){

    int input;

    while (1)
    {
        printf("정수? ");
        scanf("%d", &input);

        if(input == 0){
            break;
        }
    
        printf("count of digits: %d\n", count_digits(input));
        // count = 0;
    }
    
    return 0;
}

int count_digits(int num) {
    
    if(num <= 0){
        return 0; // return count;
    }

    // num /= 10;

    return 1 + count_digits(num / 10); // return count_digits(num);
}