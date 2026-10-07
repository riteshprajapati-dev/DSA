#include<stdio.h>+
int xstrlen(char *str){
	int c=0;
	while(*str!='\0'){
		c++;
		str++;
	}
	return c;
}
main()
{
	char str[50];
	printf("enter a string: ");
	gets(str);
	int l=xstrlen(str);
	printf("length of string : %d",l);
}

