#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* answer = (char*)malloc(1 * strlen(s) + 1); // ¦����° +1 �� NULL ���� ���� 

    strcpy(answer, s);
    int index = 0;

    for (int i = 0; i < strlen(s); i++) {
        if (answer[i] == ' ') {
            index = 0;
            continue;
        }
        if (index % 2 == 0) {
            answer[i] = toupper(answer[i]);
            index++;
        }
        else {
            answer[i] = tolower(answer[i]);
            index++;
        }

    }
    return answer;
}