/*
4. 연월일을 나타내는 DATE 구조체와 DATE 구조체를 매개변수로 전달받아 날짜는 "2019/1/1" 처럼 출력하는 print_date 함수를 정의하시오.
DATE 구조체와 print_data 함수를 이용해서 입력받은 날짜를 출력하는 프로그램을 작성하시오.

실행결과

연? [ 2019 ]
월? [ 1 ]
일? [ 1 ]
2019/1/1
*/

#include <stdio.h>

typedef struct date{
    int year;
    int month;
    int day;
} DATE;

void input();
void print_date(DATE *p);

int main(){

    input();

    return 0;
}

void input(){

    DATE d;

    printf("연? ");
    scanf("%d", &d.year);

    printf("월? ");
    scanf("%d", &d.month);

    printf("일? ");
    scanf("%d", &d.day);

    print_date(&d);
}

void print_date(DATE *p){

    printf("%d / %d / %d", p->year, p->month, p->day);

}