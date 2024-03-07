#include <stdio.h>
#include <stdbool.h>
#include <time.h>
bool prim;

int main() {
    long long x = 1;
    long long n;
    printf("n : ");
    scanf_s("%lld", &n);
    clock_t start = clock();
    printf("%d ", 2);
    long long count = 1;
    for (long long i = 1; i < n; i++) {
        do {
            x += 2;
            long long k = 2;
            prim = true;
            do {
                k += 1;
                prim = true;
                for (long long j = 2; j <= k; j++) {
                    if (x % j == 0 && x != j) {
                        prim = false;
                        break;
                    }
                }
            } while (prim && (k < x));
        } while (!prim);

        printf("%lld ", x);
        count++;
        if (count % 10 == 0)
            printf("\n");
    }
    clock_t end = clock();  
    double time = (double)(end - start) / CLOCKS_PER_SEC; 
    printf("\n실행시간 : %.6f seconds\n", time);
    return 0;
}
