#include<stdio.h>
#include<stdlib.h>
int main(){
	int a;
	int b;
	int choice;
	float result = 0;
	printf("Yeu cau nguoi dung nhap a: ");
	scanf("%d",&a);
	printf("Yeu cau nguoi dung nhap b: ");
	scanf("%d",&b);
	do{
		printf("\n********************MENU CHUC NANG********************");
		printf("\n1. Tong 2 so");
		printf("\n2. Hieu 2 so");
		printf("\n3. Tich 2 so");
		printf("\n4. Thuong 2 so");
		printf("\n5. Thoat");
		printf("\nLua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
		case 1:
			result = a + b;
			printf("Tong cua 2 so la: %.2f",result);
			break;
		case 2:
			result = a - b;
			printf("Hieu cua 2 so la: %.2f",result);
			break;
		case 3:
			result = a * b;
			printf("Tich cua 2 so la: %.2f",result);
			break;
		case 4:
			result = a % b;
			printf("Thuong cua 2 so la: %.2f",result);
			break;
		case 5:
			printf("Chuong trinh ket thuc");
			break;
		default:
			printf("Vui long nhap tu 1 - 5");
	}
	}while(1);
}
