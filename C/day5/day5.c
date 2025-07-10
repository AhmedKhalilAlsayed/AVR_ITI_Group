#include <stdio.h>
#include "stdtypes.h"

void main(){
	
	const u8 num = 10;
	
	const u8* ptr = &num;
	
	*ptr = 5;
	
	
	printf("%d", num);
	
	
}
