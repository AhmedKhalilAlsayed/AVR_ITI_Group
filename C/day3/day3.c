#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void main(void){
	
	
	int size = 4;
	int arr[4] = {0,5,6,7};
	int isSwap = false;
	
	// print my array
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	// sort
	for(int c=0;c<size;c++){
		for(int i=0;i<size-1;i++){
			printf("Entered!\n");
			if(arr[i] > arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				
				isSwap = true;
			}
	}
	
	if(isSwap == false) break;
	
	
	}
	
	
	printf("\n");
	// print my array
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	
	
	
}





