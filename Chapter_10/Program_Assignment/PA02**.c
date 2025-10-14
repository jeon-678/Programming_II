/*
2. 1번 프로그램의 아이디와 패스워드를 항상 소문자로만 저장하도록 처리하려고 한다.
LOGIN 구조체를 매개변수로 전달받아 구조체에 저장된 아이디와 패스워드를 모두 소문자로 만드는 make_lower 함수와 
아이디와 패스워드를 출력하는 print_login 함수를 정의하시오.

실행결과
ID? [ Guest ]
Password? [ Idontknow ]
ID: guest
PW: *********
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct login {
    char id[20];
    char pw[20];
} LOGIN;

void input();
void make_lower(LOGIN *p);
void print_login(LOGIN *p);

int main(){

    input();

    return 0;
}

void input(){

    LOGIN person;

    printf("ID ");
    scanf("%s", person.id); // 사용자가 아이디 입력

    printf("PassWord? ");
    scanf("%s", person.pw); // 사용자가 비밀번호 입력

    make_lower(&person);

    print_login(&person);
}

void make_lower(LOGIN *p){

    tolower(p->id); // 아이디, 패스워드 둘 다 소문자로 변환
    tolower(p->pw);
}

void print_login(LOGIN *p){

    printf("ID: %s\n", p->id); // 소문자로 바뀐 아이디 출력 

    for(int i = 0; i < strlen(p->pw); i++){ // 패스워드 글자 수 만큼 * 출력
        printf("*");
    }
    printf("\n");
}