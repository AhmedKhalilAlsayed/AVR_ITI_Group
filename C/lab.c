#include <stdio.h>
void main(void){
	
	char num=0,sum=0,i=0;
	
	printf("> &i\t%p\n",&i);
	printf("> &num\t%p\n",&num);
	printf("> &sum\t%p\n",&sum);
	
		for( i=1;i<=10;i++){
			printf("enter number %d:",i);
			scanf("%hhd",&num);
			sum=sum+num;
		  }
		  
		printf("%hhd",sum);
}