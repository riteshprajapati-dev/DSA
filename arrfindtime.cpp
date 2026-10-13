//wap to store five number in array and take input from user for searching an element.
#include<stdio.h>
main(){
	int n,s,f=0;
	printf("Enter the size of element : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the number to search : ");
	scanf("%d",&s);
	for(int i=0;i<n;i++){
		if(s==arr[i]){
			f++;
		}
	}
printf("%d occured time : %d",s,f);

}
