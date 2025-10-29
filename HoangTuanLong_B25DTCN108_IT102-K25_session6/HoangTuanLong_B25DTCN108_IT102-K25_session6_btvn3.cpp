#include <stdio.h>

int main() {
    int n;
    long long sum = 0;

    printf("Nhap vao 1 so nguyen duong N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Tong cac so tu 1 den %d là: %lld\n", n, sum);

    return 0;
}
