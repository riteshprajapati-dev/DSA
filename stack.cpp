//wap to perform stack opeartions
#include<stdio.h>
#define N 5
main(){
	struct stk{
		int stack[N];
		int top;
	};
	struct stk s;//stack variable
	int ch=0,item,i;
	s.top=-1;
	while(ch!=4){
		printf("1=> PUSH\n");
		printf("2=> POP\n");
		printf("3=> TRAVERSE\n");
		printf("4=> EXIT\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				if(s.top==N-1){
					printf("Write Overflow\n");
				}
				else{
					s.top=s.top+1;
					printf("Enter Value To Insert - ");
					scanf("%d",&item);
					s.stack[s.top]=item;	
				}
			break;
			case 2:
				if(s.top==-1){
					printf("Write Underflow\n");
				}
				else{
					item = s.stack[s.top];
					printf("Deleted Item=%d\n",item);
					s.top=s.top-1;	
				}
			break;
			case 3:
				if(s.top==-1){
					printf("Stack is empty");
				}
				else{
					
					printf("Element of stack - \n");
					for(i=s.top;i>=0;i--){
						printf("%d\n",s.stack[i]);
					}
					s.stack[s.top]=item;	
				}
			break;
			case 4:
				printf("Exit...\n");
			break;
		}
	}
	
	
}