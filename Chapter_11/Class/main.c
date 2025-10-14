#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "func.c"
#include "func.h"

extern int get_ID(void);
extern int last_id;


int main(int argc, char *argv[]){

    printf("추석 잘 보냈어요? \n");

    printf("회원1의 ID = %d\n", get_ID()); // 1001
    printf("회원2의 ID = %d\n", get_ID()); // 1002
    printf("회원3의 ID = %d\n", get_ID()); // 1003

    // printf("last_id = %d\n", last_id++);

    return 0;
}