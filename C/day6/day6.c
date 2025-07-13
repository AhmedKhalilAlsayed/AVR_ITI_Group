#include <stdio.h>
#include "stdtypes.h"


typedef struct Employee{
	u8 name[15];
	u32 salary;
	u8 bonus;
}Employee;

void main(void){
	Employee ahmed;
	
	Employee* strPtr = &ahmed;
	
	//(*strPtr).salary= 1000;
	strPtr->salary= 1000;
	
	
	
	printf("%d", ahmed.salary);
	
	
}