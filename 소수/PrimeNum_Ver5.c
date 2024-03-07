#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define index long long
index p[99999999];

int main() {
    index n = 0;
    long long x = 0;
    index i, k, lim;
    bool prim;

    printf("Enter the value of n: ");
    scanf_s("%lld", &n);

    p[1] = 2;
    printf("%lld ", p[1]);
    x = 1;
    lim = 1;

    for (i = 2; i <= n; i++) {
        do {
            x += 2;
            if (pow(p[lim], 2) <= x)
                lim += 1;
            k = 2;
            prim = true;
            while (prim && (k < lim)) {
                if (x % p[k] == 0)
                    prim = false;
                k++;
            }
        } while (!prim);
        p[i] = x;
        printf("%lld ", p[i]);
        if (i % 10 == 0)  // 한 줄에 10개씩 출력
            printf("\n");
    }

    return 0;
}
