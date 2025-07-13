#include <stdio.h>
#include <stdlib.h>
#include "stdtypes.h"



typedef struct Student{
	u8 id;
	u8 grade;
	
}Student;


void main(void){
	Student class[10];
	
	for(u8 i=0;i<10;i++){
		class[i].id = i;
		class[i].grade = rand()%50;
	}
	
	
	
	
	// echo
	for(u8 i=0;i<10;i++){
		printf("C[%d].id = %d, C[%d].grade = %d\n",i,class[i].id,i, class[i].grade);
		
	}
	
}