#include <stdio.h>
#include "stdtypes.h"


void main(){
	
	for(int i=0;i<3;i++){
		int sum = 0;
		sum++;
		printf("normal sum %d\n",sum);
	}
	
	printf("\n");
	
	for(int i=0;i<3;i++){
		static int sums = 0;
		sums++;
		printf("static sum %d\n",sums);
	}
	
	
	
	
}
