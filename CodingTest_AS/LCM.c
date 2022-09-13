#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int arr[], int arr_len) {
    int answer = arr[0];
    for (int i = 1; i < arr_len; i++) {
        answer = cgs(answer, arr[i]);
    }
    return answer;   
}

int cgs(int a, int b) {
    return a * b / cys(a, b);
}

int cys(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(void) {
    int arr[] = { 2,6,8,14 };
    int arr_len = sizeof(arr) / sizeof(int);
    int answer = solution(arr, arr_len);
    printf("%d",answer);

    return 0;
}