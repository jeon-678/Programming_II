/*
1. 텍스트 파일의 이름을 입력받아서 파일의 내용을 라인 번호와 함께 출력하는 프로그램을 작성하시오.

실행 결과
파일명? [ readme.txt ]
  1: This is text file for input test.
  2: This file contains multiple line of text.
  3: The program displays the content of file with line number.
*/

#include <stdio.h>

void file(const char *filename) {

    FILE *fp;
    char str[BUFSIZ];

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다: %s\n", filename);
        return;
    }
    while(fgets(str, sizeof(str), fp) != NULL){
        fprintf(stdout, "%s\n");
    }

    fclose(fp);
}

int main(void) {
    char filename[32];

    printf("파일명? ");
    scanf("%s", filename);

    file(filename);

    return 0;
}