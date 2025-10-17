/*
12. 기차표 예매 프로그램을 작성하려고 한다.
간단한 구현을 위해 좌석은 모두 10개라고 하자.
예매할 좌석수를 입력받아 빈 자리를 할당한다.
예매할 좌석 마다 각 좌석의 상태를 출력한다.
O이면 예메 가능, X는 예매 불가를 위미한다.
더 이상 예메할 수 없으면 프로그램을 종료한다.

실행결과
현재 좌석: [ O O O O O O O O O O ]
예매할 좌석수? [ 3 ]
1 2 3 번 좌석을 예매했습니다.
현재 좌석: [ X X X O O O O O O O ]
예매할 좌석수? [ 4 ]
4 5 6 7 번 좌석을 예매했습니다.
현재 좌석: [ X X X X X X X O O O ]
에매할 좌석수? [ 3 ]
8 9 10 번 좌석을 예매했습니다.
*/

#include <stdio.h>

int main(){

    return 0;
}

void seat(){

    char s[10] = { 0 };
    int amount, count = 0;

    while (1)
    {
        printf("현재 좌석: [ ");
        for(int i = 0; i < 10; i++){
            if(s[i] == 0){
                printf("O ");
            }
            else{
                printf("X ");
            }
        }
        printf("]\n예메할 좌석 수? ");
        scanf("%d", &amount);
        for(int i = count; i < count + amount; i++){
            s[i] = 1;
        }
    }
}