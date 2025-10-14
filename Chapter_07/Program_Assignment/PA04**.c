/*
4. 특정 값으로 초기화된 정수형 배열에 대하여 배열의 원소 중 최대값을 가진 원소와 최소값을 가진 원소를 찾아서 인덱스와 값을 함께 출력하는 프로그램을 작성하시오.
배열의 초기값은 마음대로 정하시오.

실행결과
배열: 23 45 62 12 99 83 23 50 72 37
최대값: 인덱스=4 값=99
최소값: 인덱스=12 값=12
*/

#include <stdio.h>
#define SIZE 10

int ARR();

int main() {

	ARR();

	return 0;
}

int ARR() {
	int arr[SIZE] = { 23, 45 ,62, 12, 99, 56, 87, 32, 54, 13 }, max, min, index_max, index_min;

	printf("배열? ");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
	max = min = arr[0];

	for (int i = 0; i < SIZE; i++) {
		if (max < arr[i]) {
			max = arr[i];
			index_max = i;
		}
		else if (min > arr[i]) {
			min = arr[i];
			index_min = i;
		}
	}
	printf("\n최댓값: 인덱스 = %d, 값 = %d\n최솟값: 인덱스 = %d, 값 = %d", index_max, max, index_min, min);
}