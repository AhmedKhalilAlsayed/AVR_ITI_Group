#include <stdio.h>
#include "stdtypes.h"

u8 count(){
	//u8 sum = 0; // stored in stack section
	static u8 sum = 0; // stored in .data section
	sum++;
	return sum;
}


void main(){
	
	printf("%d\n", count());
	printf("%d\n", count());
	printf("%d\n", count());
	
	
	
	
	
}
