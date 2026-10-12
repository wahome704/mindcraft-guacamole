#include <stdio.h>
int main(){
	
	int units;
	float bill
	;
	
	printf("Enter number of water units consumed:");
	scanf("%d", &units);
	
	
	if(units<=30){
		bill=units*20;
	}
	
	else if(units<=60){
		bill=units*25;
	}
	else{
		bill=units*30;
	}
	
	printf("Water bill=kes%.2f",bill);
	
	return 0;
	
}