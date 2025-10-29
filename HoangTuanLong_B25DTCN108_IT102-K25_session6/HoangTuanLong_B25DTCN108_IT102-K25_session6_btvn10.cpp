#include<stdio.h>

int main(){
	int n,reverseN = 0,i;
	printf("Enter n: ");
	scanf("%d",n);
	while(n>0){
		i = n % 10;
		reverseN = reverseN *10 + i;
		n/=10;
	}
	while(reverseN >0){
		i = reverseN % 10;
		printf("%d \t",i);
		reverseN /=10;
	}
	
	return 0;
}
