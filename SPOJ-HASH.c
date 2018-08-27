#include <stdio.h>

int main() {
unsigned int t;
unsigned long long a, b, x, n, c, d, m, cont, i, f;
cont = 0;

scanf("%d", &t);

while(t--) {
    scanf("%llu %llu %llu %llu %llu %llu %llu", &a, &b, &x, &n, &c, &d, &m);
    for (i = 0; i <= n; i++) {
        f = (a*(x + i)+ b)% m;
        if (f <= d && f >= c) {
            cont++; }
        }
        printf("%llu\n", cont);
        cont = 0;
    }
    return 0;
}
