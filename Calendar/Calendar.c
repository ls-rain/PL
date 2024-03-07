#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int array[42] = { 0 };
	int year, day;
	printf("연도 입력 : ");
	scanf("%d", &year);
	//1년에 요일하나씩 밀림 + 윤년에는 하나 더 밀림 - 100년에 한번은 윤년X + 400년은 윤년O
	day = (year - 1) * 365 + (year -  1)/4 - (year-1) / 100 + (year - 1) / 400;
	day %= 7;	//1월1일 요일계산
	for (int i = 1; i <= 31; i++) {
		array[++day] = i;
	}
	printf(" 일 월 화 수 목 금 토\n");
	for (int i = 0; i < 42; i++) {
		if (array[i] == 0) printf("   ");
		else printf("%3d", array[i]);
		if ((i + 1) % 7 == 0) printf("\n");
	}
	return 0;
}
