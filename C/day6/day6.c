#include <stdio.h>
#include "stdtypes.h"


typedef struct Employee{
	u8 name[15];
	u32 salary;
	u8 bonus;
}Employee;






void main(void){
	struct Employee arr[3];
	
	
	for(u8 i =0;i<3;i++){
		printf("Enter your name: ");
		scanf("%s", arr[i].name);
		
		printf("Enter your salary: ");
		scanf("%d", &arr[i].salary);
		
		printf("Enter your bonus: ");
		scanf("%d",&arr[i].bonus);
		
	}
	
	
	
	
	// echo, printf array data
	
	
	
	
	
}

