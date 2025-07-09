
/*
desc: sum the numbers from the input number down to 1
	and based on recurions concept
pars: int,
return: int
*/
int sum(int num){
	
	if(num == 1) return 1;
	
	return num+sum(num-1);
	
}