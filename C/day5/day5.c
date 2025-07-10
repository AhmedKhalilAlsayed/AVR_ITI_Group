#include <stdio.h>

// 1B
typedef unsigned char u8;
typedef signed char s8; 
// 2B
typedef unsigned short int u16;
typedef signed short int s16;
// 4B
typedef unsigned int u32;
typedef signed int s32;
// 8B
typedef unsigned long int u64;
typedef signed long int s64;


void main(){
	
	
	printf("%d\n", sizeof(u8)*8);
	printf("%d\n\n", sizeof(s8)*8);
	
	printf("%d\n", sizeof(u16)*8);
	printf("%d\n\n", sizeof(s16)*8);
	
	printf("%d\n", sizeof(u32)*8);
	printf("%d\n\n", sizeof(s32)*8);
	
	printf("%d\n", sizeof(u64)*8);
	printf("%d\n\n", sizeof(s64)*8);
	
}
