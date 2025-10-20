/*
어려운 난이도의 문제: 사용자로부터 주사위 세 개를 입력받아 상금을 받는 게임이다.
    같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
    같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
    모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.

문제 분석: 숫자 세 개가 같은 경우는 조건 하나로 해결 가능하니 먼저 검사하고, 다음 조건으로 갈 수록 경우의 수가 커지니
        코드를 효율적으로 작성한다. 예를 들어 a 숫자와 b 숫자가 같은 경우, b 숫자와 c 숫자가 같은 경우는 숫자 2개가 같으니 
        상금을 계산할 때 b 숫자를 이용하면 두 가지 케이스를 한 번에 처리할 수 있다.
*/

#include <stdio.h>

int judge(int a, int b, int c, int price);

int main(){

    int a, b, c, price;
    
    scanf("%d %d %d", &a, &b, &c);
    judge(a, b, c, price);

    return 0;
}

int judge(int a, int b, int c, int price) {

    if (a == b && b == c) {
        price = 10000 + (a * 1000);
    }
    else if (a == b || b == c) {
        price = 1000 + (b * 100);
    }
    else if (c == a) {
        price = 1000 + (a * 100);
    }
    else {
        int max = 0;
        if (a > b) {
            if (a > c)
                max = a;
            else 
                max = c;
        }
        else { // b가 큰 경우
            if (b > c)
                max = b;
            else
                max = c;
        }
        price = max * 100;
    }
    printf("%d", price);
    return 0;
}