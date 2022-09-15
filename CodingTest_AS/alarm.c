#include <stdio.h>

int main(void) 
{
	int hour, minute;
	scanf_s("%d %d", &hour, &minute);

	minute -= 45;
	if (minute < 0) {
		minute += 60;
		hour -= 1;

		if (hour < 0) {
			hour = 23;
		}
	}

	printf("%d %d", hour, minute);
}