#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;

    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        answer = solution(n - 1) + solution(n - 2);
    }
    return answer;
}

int main(void) {
    int n = 0;
    printf("�Ǻ���ġ ���� �Է� : ");
    scanf("%d", &n);
    printf("F(%d) = %d\n", n, solution(n));

    return 0;
}