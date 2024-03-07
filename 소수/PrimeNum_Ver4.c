#include <stdio.h>
#include <stdbool.h>
#include <time.h>
bool prim;
long long p[98765432];
int main() {
    long long x = 1;
    long long n;
    printf("n : ");
    scanf_s("%lld", &n);
    clock_t start = clock();
    printf("%d ", 2);
    long long count = 1;
 

    for (int i = 1; i < n; i++) {
        do {
            x += 2;
            long long k = 2;
            prim = true;

            while (prim && (k < i)) {
                prim = (x % p[k] != 0);
                k++;
            }
        } while (!prim);

        p[i] = x;
        printf("%lld ", p[i]);
        count++;
        if (count % 10 == 0)
            printf("\n");
    }
    clock_t end = clock();
    double time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\n실행시간 : %.6f seconds\n", time);
    return 0;
}
