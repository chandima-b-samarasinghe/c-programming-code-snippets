/*
	32 bit integer to Binary
	Chandima B Samarasinghe
*/
#include <stdio.h>
int main(){
	int input;
	printf("Enter an integer in decimal number system\n");
	scanf("%d",&input);
	printf("%d in binary number system is: ",input);

	unsigned int temp=1;
	temp=temp<<31; //100..(31 0 digits)
		int i;
		for(i=32;i>=1;i--){
			if((temp & input)>0){
				printf("1");
			}else{
				printf("0");
			}
			temp=temp>>1;
		}
	printf("\n");
	return 0;
}
