#include <stdio.h>

int main(){
	int input1,input2; //to hold inputs
	int inputs_count; //to hold the (number of valid inputs)

	inputs_count=scanf("%i %i",&input1,&input2); //note that scanf() function, gets arguments as the pointers to the input1, input2 variables.

	if(inputs_count==1){
		//things to do when only 1 valid input
		puts("only 1 valid input");
	}else if(inputs_count==2){
		//things to do when both inputs are valid
		puts("both inputs are valid");
	}else{
		//things to do else (0 valid inputs...)
		puts("no valid inputs");
	}
	return 0;
}