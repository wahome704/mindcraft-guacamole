/*
program to computer discount
amount>=10,000, 10%discount 
amount between 5000 and 10000 = 5%
below 5000, no discount
*/
#include <stdio.h>
int main (){
	float Amount, Discount , Amount_to_pay;
	
	printf ("Enter the amount purchased:\t");
	scanf("%f" ,&Amount);
	
	if(Amount>=10000){
		Discount = 0.1 *Amount;
		Amount_to_pay = Amount - Discount;
		printf("Discount = %.2f\n", Discount);
		printf("Amount to pay = %.2f\n" , Amount_to_pay);
		
	}
	
	else if(Amount>=50000 &&Amount<100000){
		
		Discount=0.05*Amount;
		Amount_to_pay= Amount-Discount;
			printf("Discount = %.2f\n" ,Discount);
			printf("Amount_to_pay = %.2f\n" ,1500000 ,Amount_to_pay);
			
			
	}
	else{
		Discount = 0.0;
		Amount_to_pay = Amount;
		printf("Discount = %2.f\n" ,Discount);
		printf("Amount to pay = %.2f\n", Amount_to_pay);
		

			return 0;
	
	}	

}	