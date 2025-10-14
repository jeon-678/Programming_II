/*
2. 등비수열은 앞의 항에 항상 일정한 수(공비)를 곱하여 만들어가는 수열이다.
크기가 10인 실수형 배열에 대하여 등비수열로 값을 채우려고 한다.
첫 번째 항의 값과 공비(common ratio)를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오.

실행결과
첫 번째 항? [ 1.2 ]
공비? [ 5 ]
등비수열: 1.2 6 30 150 750 3750 18750 93750 468750 2.34375e+06
*/

#include <stdio.h>
#include <math.h>
#define SIZE 10

double input();
double common_ratio(double a, double r, int i);

int main() {
	input();

	return 0;
}
/*
* 함수명: input
* 기능: 사용자에게 첫 항과 공비를 입력받는다.
*/
double input() {
	double a, r, arr[SIZE] = { 0 };
	int i = 0;

	printf("첫 번째 항? ");
	scanf("%lf", &a);

	printf("공비? ");
	scanf("%lf", &r);

	printf("등비수열: ");

	while (i < SIZE) {
		arr[i] = common_ratio(a, r, i);

		i++;
	}

	for (int j = 0; j < SIZE; j++) {
		printf("%g ", arr[j]);
	}
}
/*
* 함수명: common_ratio
* 기능: 전달받은 인자값을 이용하여 등비수열의 결과를 계산한다.
* 반환: 계산된 수열의 값
*/
double common_ratio(double a, double r, int i) {
	return a * pow(r, i);
}