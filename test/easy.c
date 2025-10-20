/*
쉬운 난이도의 문제: 정수로만 사칙연산이 가능한 프로그램을 작성하시오.

문제 분석: 사칙연산은 덧셈, 뺄셈, 곱셈, 나눗셈 총 네 가지로 분류되는 연산 방법이다.
        그러니 네 가지 모두 계산되게끔 나눠 설계한다.
*/

#include <stdio.h>

int plus(int num1, int num2);
int minus(int num1, int num2);
int times(int num1, int num2);
int divide(int num1, int num2);

int main(){

    int num1, num2;
    char calc;

    scanf("%d %c %d", &num1, &calc, &num2);

    if(calc == '+'){
        printf("%d", plus(num1, num2));
    }
    else if(calc == '-'){
        printf("%d", minus(num1, num2));
    }
    else if(calc == '*'){
        printf("%d", times(num1, num2));
    }
    else {
        printf("%d", divide(num1, num2));
    }

    return 0;
}

int plus(int num1, int num2){
    int result = num1 + num2;
    return result;
}

int minus(int num1, int num2){
    int result = num1 - num2;
    return result;
}

int times(int num1, int num2){
    int result = num1 * num2;
    return result;
}

int divide(int num1, int num2){
    int result = num1 / num2;
    return result;
}