#include<stdio.h>

int main(){
	int a;
	int b;
	printf("Nhap so nguyen duong a: ");
	scanf("%d",&a);
	printf("Nhap so nguyen duong b: ");
	scanf("%d",&b);
	
	if(a<=0||b<=0){
		printf("Vui long nhap so nguyen duong");
		return 1;
	}
	while(b!=0){
		int temp=b;
		b = a%b;
		a = temp;
	}
	printf("Uoc chung lon nhat la: %d",a);
}
