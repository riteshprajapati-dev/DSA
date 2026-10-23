#include<stdio.h>
main(){
	int n,i,digit,sum=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(n!=0){
		digit=n%10;
		sum = sum+digit;
		n= n/10;
	}
	printf("Sum: %d",sum);
}
