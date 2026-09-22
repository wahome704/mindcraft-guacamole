#include <stdio.h>

		//Define pi as a constant macro so it easy to use everywhere
	#define PI3.14159265359
	
	int main(){
	//Declare variable for inputs and outputs double radius, height;double volume,surfaceArea;
	
	//propmt user for radius and height 
	
	printf("Enter the radius of the cylinder;");
	scanf("%f", &radius);
	
	printf("Enter the height of the cylinder:");
	scanf("%f", &height);
	
	//perform calculations
	//radius *radius gives r^2
	volume= PI * radius * radius * height;
    surfaceArea = (2 * PI * radius * radius) + (2 * PI * radius * height); 
    
	 Output results formatted to 2 decimal places
    printf("\n--- Cylinder Calculations ---\n");
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);      

	return 0;
}