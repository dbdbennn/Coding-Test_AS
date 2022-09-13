#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len�� �迭 numbers�� �����Դϴ�.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    for(int i = 0; i < numbers_len; i++){
        answer += numbers[i];
    }    
    
    int total = 0;
    for(int i = 0; i < 10; i++){
        total += i;
    }
    return total - answer;
}

int main(void) {
    int numbers[] = { 1, 2, 3, 4, 6, 7, 8, 0 };
    int numbers_len = sizeof(numbers) / sizeof(int);
    int answer = solution(numbers, numbers_len);

    printf("[");
    for (int i = 0; i < numbers_len; i++) {
        printf("%d ", numbers[i]);
    }
    printf("] ���� ã�� �� ���� 0���� 9������ ���� �� : %d", answer);

}