#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int inc_ID(int n);

// 함수명: get_ID()
// 기능: 1001번부터 차례로 유일한 번호를 증가하면서 반환하는 기능
// 입력: 없음
// 반환값: 1001부터 시작해서 1씩 증가하는 유일한 값
// 오류: 없음
int get_ID(void){ // static 붙이면 함수도 숨길 수 있음

    static int last_id = 1000;

    last_id = inc_ID(last_id);

    return last_id;
}

static int inc_ID(int n){

    return n + 1;
}