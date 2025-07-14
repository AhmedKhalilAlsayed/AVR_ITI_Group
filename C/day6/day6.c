#include <stdio.h>
#include <stdlib.h>
#include "stdtypes.h"


// new data type that has some persons in enum

typedef enum{
	Ahmed,
	Ali,
	Mohammed
}Persons;

void main(void){
	
	//Persons person = 0; //== Ahmed
	//Persons person = 1; //== Ali
	//Persons person = 2; //== Mohammed
	
	//Persons person = Ahmed;	// == 0 
	Persons person = Ali; 		//== 1
	//Persons person = Mohammed; //== 2
	
	switch(person){
		case Ahmed: printf("Data of Ahmed\n"); break;
		case Ali: printf("Data of Ali\n"); break;
		case Mohammed: printf("Data of Mohammed\n"); break;
	}
	
	
}