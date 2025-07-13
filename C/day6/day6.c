#include <stdio.h>
#include <stdlib.h>
#include "stdtypes.h"



typedef struct Student{
	u8 x;
	u16 z;
	u32 y;
}Student;


void main(void){
	Student s;
	printf("%d", sizeof(s));
	
	
}