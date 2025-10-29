#include<stdio.h>

int main(){
	int n;
	do{
		printf("Nhap 1 so nguyen tu 1 - 10: ");
		scanf("%d",&n);
		
		if(n<1||n>10){
			printf("Vui long nhap lai so nguyen tu 1 - 10\n");
		}
	}while(n<1||n>10);
	printf("\nBang cuu chuong\n",n);
	for(int i =1 ; i<=10 ; i++){
		printf("%d x %d = %d\n", n, i, n * i);
	}
	return 0;
}
