#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

// 소수인지 판별하는 함수
bool isPrime(long long num) {
    if (num < 2)
        return false;
    for (long long i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    long long n;
    printf("n : ");
    scanf_s("%lld", &n);

    // 실행 시간 측정
    clock_t start = clock();  // 시작 시간 측정

    // n개의 소수 출력
    long long count = 0;
    long long num = 2;
    while (count < n) {
        if (isPrime(num)) {
            printf("%lld ", num);
            count++;
            if (count % 10 == 0)  // 한 줄에 10개씩 출력
                printf("\n");
        }
        num++;
    }

    clock_t end = clock();  // 종료 시간 측정
    double time = (double)(end - start) / CLOCKS_PER_SEC;  // 실행 시간 계산
    printf("\n실행시간: %.6f seconds\n", time);

    return 0;
}
