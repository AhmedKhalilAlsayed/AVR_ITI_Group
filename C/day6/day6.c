#include <stdio.h>
#include <stdlib.h>
#include "stdtypes.h"


// a new data type (union) to define a byte value and its bits with struct

typedef union Byte_t{
	u8 byteValue;
	struct bits{
		u8 b0 : 1;
		u8 b1 : 1;
		u8 b2 : 1;
		u8 b3 : 1;
		u8 b4 : 1;
		u8 b5 : 1;
		u8 b6 : 1;
		u8 b7 : 1;
	};
}Byte_t;


void main(void){
	
	Byte_t motorControl ={255};
	
	printf("byteValue = %d\n", motorControl.byteValue);
	
	printf("in bits = %d%d%d%d %d%d%d%d\n", motorControl.b7, motorControl.b6, motorControl.b5,motorControl.b4,motorControl.b3,motorControl.b2,motorControl.b1,motorControl.b0);
	
}