#include <stdio.h>

int main() {
    int a, b, c;
    int choice;
    int daNhapSo = 0;

    do {
        printf("\n-------Menu chuc nang---------\n");
        printf("1. Nhap 3 so nguyen\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so thu 1: ");
                scanf("%d", &a);
                printf("Nhap so thu 2: ");
                scanf("%d", &b);
                printf("Nhap so thu 3: ");
                scanf("%d", &c);
                daNhapSo = 1;
                printf("Da nhap 3 so: %d, %d, %d\n", a, b, c);
                break;

            case 2:
                // 2. Tính t?ng
                if (daNhapSo == 0) {
                    printf("Vui long nhap 3 so truoc\n");
                } else {
                    int tong = a + b + c;
                    printf("Tong 3 so là: %d\n", tong);
                }
                break;

            case 3:
                if (daNhapSo == 0) {
                    printf("Vui long nhap 3 so truoc\n");
                } else {
                    double tbc = (double)(a + b + c) / 3.0; 
                    printf("Ket qua: Trung binh cong 3 so là: %.2f\n", tbc);
                }
                break;

            case 4:
                if (daNhapSo == 0) {
                    printf("Vui lòng nhap 3 so truoc\n");
                } else {
                    int min = a;
                    if (b < min) {
                        min = b;
                    }
                    if (c < min) {
                        min = c;
                    }
                    printf("So nho nhat là: %d\n", min);
                }
                break;

            case 5:
                if (daNhapSo == 0) {
                    printf("Vui lòng nhap 3 so truoc\n");
                } else {
                    int max = a;
                    if (b > max) {
                        max = b;
                    }
                    if (c > max) {
                        max = c;
                    }
                    printf("Ket qua: So lon nhat là: %d\n", max);
                }
                break;

            case 6:
                printf("Ket thuc chuong trinh\n");
                break;

            default:
                printf("Vui long chon tu 1 - 6\n");
                break;
        }

    } while (choice != 6);

    return 0;
}
