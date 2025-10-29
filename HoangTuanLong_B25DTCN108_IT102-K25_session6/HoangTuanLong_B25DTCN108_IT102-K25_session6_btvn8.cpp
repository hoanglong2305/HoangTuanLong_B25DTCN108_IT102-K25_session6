#include <stdio.h>

int main() {
    int a, b;
    int a_goc;
	int b_goc;
    int ucln;
    int temp;
	long long bcnn;

    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Vui long nhap so nguyên duong.\n");
        return 1;
    }

    a_goc = a;
    b_goc = b;

    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    ucln = a;
    bcnn = (long long)a_goc / ucln * b_goc;
    printf("Boi chung nho nhat cua %d và %d là: %lld\n", a_goc, b_goc, bcnn);
    
    return 0;
}
