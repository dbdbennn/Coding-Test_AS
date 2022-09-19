#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long sum = 0;
    for (int i = 1; i <= count; i++) {
        sum += price * i;
    }

    if (money < sum) {
        return sum - money; // 차이값을 return하기 때문에 더한 값에서 갖고 있는 돈을 뺌
    }

    else return 0;
}

int main(void)
{
    int price = 3, money = 20, count = 4;
    printf("%d", solution(price, money, count));
}