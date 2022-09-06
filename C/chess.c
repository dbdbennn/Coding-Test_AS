/*
체스는 총 16개의 피스를 사용하며, 
킹 1개, 퀸 1개, 룩 2개, 비숍 2개, 나이트 2개, 폰 8개로 구성되어 있다.

동혁이가 발견한 흰색 피스의 개수가 주어졌을 때, 
몇 개를 더하거나 빼야 올바른 세트가 되는지 구하는 프로그램을 작성하시오.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int chess[6] = { 1, 1, 2, 2, 2, 8 }; // 기존 배열
	int now[6] = { 0, };                 // 현재 갯수

	for (int i = 0; i < 6; i++) {
		scanf("%d", &now[i]); // 입력받음

		now[i] = chess[i] - now[i]; // 각 값을 빼서 계산함

		printf("%d ", now[i]); // 출력
	}

	return 0;
}
