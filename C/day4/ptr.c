#include <stdio.h>
/*
int edit(int num1){
	num1 = 30;
	return num1;
}

void editPtr(int* num){
	*num = 30;
	//return num1;
}

*/


/*
void sumPtr(int num1, int num2, int* res){
	*res = num1 + num2;
}


// operations: '+' '*' '-' '/' .......
void calcPtr(int num1, int num2, int* res, char operation){
	
	switch(operation){
		case '+': *res = num1 + num2; break;
		case '-': *res = num1 - num2; break;
		case '*': *res = num1 * num2; break;
		case '/': *res = num1 / num2; break;
		default:
		printf("Wrong operation!!!\n");
		
	}
	
}
*/




// end of string '\0'

// print int array
// print double array
// print float array
// print char array

void printArr(int* ptrArr, int len){
	for(int i=0;i<len;i++){		
		printf("%d ", *(ptrArr+i));
	}
}





void main(void){
	
	int arr[3] = {3,6,7};// 12B
	
	printArr(arr, sizeof(arr)/sizeof(int));
	
	
	
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		sum += arr[i];
		sum += *(ptr+i);
		sum += *(ptr++);
	}
	
	
	
	
	/*
	
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	
	int* ptr = arr; // arr 
	
	int sum=0;
	
	/*
	int len = sizeof(arr)/sizeof(int);
	while(len > 0){
		
		sum += *ptr++;
		
		len--;
	}*/
	
	
	/*
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		// sum += arr[i];
		sum += *(ptr+i);
		sum += *(ptr++);
	}
	*/
	
	
	
	
	
	
	/*
	
	char numc;
	int numI;
	float numFloat;
	double numDouble;
	
	char* ptrnumc = &numc;
	int* ptrnumI = &numI;
	float* ptrnumFloat = &numFloat;
	double* ptrnumDouble = &numDouble;
	
	// lab: print address of vars
	printf("%p\n", &numc);
	printf("%p\n", &numI);
	printf("%p\n", &numFloat);
	printf("%p\n", &numDouble);
	printf("\n");
	
	// lab: print values  of ptrs
	printf("%p\n", ptrnumc);
	printf("%p\n", ptrnumI);
	printf("%p\n", ptrnumFloat);
	printf("%p\n", ptrnumDouble);
	printf("\n");
	
	// lab: print address of ptrs
	printf("%p\n", &ptrnumc);
	printf("%p\n", &ptrnumI);
	printf("%p\n", &ptrnumFloat);
	printf("%p\n", &ptrnumDouble);
	printf("\n");
	
	
	*/
	
	
	
	
	/*
	int* var;
	
	printf("sizeof char     = %d\n", sizeof(char));
	printf("sizeof int      = %d\n", sizeof(int));
	printf("sizeof float    = %d\n", sizeof(float));
	printf("sizeof double   = %d\n", sizeof(double));
	
	
	printf("sizeof char*    = %d\n", sizeof(char*));
	printf("sizeof int*     = %d\n", sizeof(int*));
	printf("sizeof float*   = %d\n", sizeof(float*));
	printf("sizeof double*  = %d\n", sizeof(double*));
	
	*/
	
	
	
	
	
	
	/*
	int num1=10, num2=20;

	printf("%d\n", num1);
	
	editPtr(&num1);
	
	printf("%d", num1);
	
	
	*/
	
	
	
	
	/*
	int x = 10;
	int* ptr = &x;
	
	printf("Your x is before %d \n", x);
	
	*ptr = 20;
	
	printf("Your x is after %d \n", x);
	*/
	
}