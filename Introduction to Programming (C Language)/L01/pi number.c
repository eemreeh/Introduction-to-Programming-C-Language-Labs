#include<stdio.h>

main(){
	float num1, num2,a,b;
	a =0.0;
	b = 0.0;
	int i,j;
	for (i = 1;i<98;i= i+4){
		a = a + (1.0/i - 1.0/(i+2)); 
		
	}
	num1 = 4*a;

	for (j = 1; j< 11198; j = j +4){
		b = b + (1.0/j - 1.0/(j+2));
		
	}
	num2 = 4*b;
	
	printf("Number 1 is %f \nNumber 2 is %f",num1,num2);
	
	
	
}
