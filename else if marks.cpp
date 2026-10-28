#include <stdio.h>
int main(){
	float attendance, average;
	
	printf("Enter attendance percentage:");
   	scanf("%f",&attendance);
	
	printf("Enter average marks:");
	scanf("%f",&average);
	
	if(attendance>=75&& average>=40){
		
		printf("Eligble");
	}
	else
	{
		printf("Not eligible");
	}
		  return 0;
}