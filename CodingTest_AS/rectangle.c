#include <stdio.h>

// 직사각형의 모서리까지 가는 최솟값을 구하는 프로그램
int main(void)
{
	int x, y, w, h;
	scanf_s("%d %d %d %d", &x, &y, &w, &h);
	
	int min_width, min_height;

	if (x < w - x) {
		min_width = x;
	}
	else {
		min_width = w - x;
	}
	if (y < h - y) {
		min_height = y;
	}
	else {
		min_height = h - y;
	}
	if (min_width < min_height) {
		printf("%d", min_width);
	}
	else {
		printf("%d", min_height);
	}

	return 0;
}