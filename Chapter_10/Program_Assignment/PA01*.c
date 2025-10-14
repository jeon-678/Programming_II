/*
이름 : 전기준
날짜 : 2025.10.11
*/

#include <stdio.h>
#include <string.h>

void Login();

typedef struct login{
    char id[20];
    char pw[20];
} LOGIN;

int main(){

    Login();

    return 0;
}

void Login(){

    LOGIN person;

    printf("ID? ");
    scanf("%s", person.id);

    printf("PW? ");
    scanf("%s", person.pw);

    printf("ID: %s", person.id);
    printf("\nPW: ");
    for(int i = 0; i < strlen(person.pw); i++){
        printf("*");
    }
    printf("\n");
}