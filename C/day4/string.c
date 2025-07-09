#include <stdio.h>




// str, small >> cap

void main(void){
	
	char str[15];
	printf("Enter your str: ");
	
	// scan from user
	fgets(str, sizeof(str), stdin);
	
	// conver small to capital
	
	for(int i=0;str[i] != '\0';i++){
		
		if((str[i] >= 'a') && (str[i] <= 'z'))
		str[i] -= 32;
		
	}
	
	// print str
	printf("%s", str);
	
	
}


