#include <stdio.h>
int main(){
	
	float height;
	double balance;
	char phone[15];
	
	printf("Enter your height: ");
	scanf("%f" ,&height);
	
	printf("Enter your bank balance: ");
	scanf("%if",&balance);
	
	printf("Enter your phone number: ");
	scanf("%14s", phone);
	
	printf("\nYour Details:\n");
	printf("Height: %.2f\n",height);
	printf("Bank Balance:ksh %.2f\n",balance);
	printf("Phone Number:%s\n",phone); 
	
	return 0;
	
}