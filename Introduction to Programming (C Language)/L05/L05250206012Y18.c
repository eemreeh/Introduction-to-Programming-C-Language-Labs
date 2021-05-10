#include <stdio.h>

int add(int , int );
int sub(int , int );
int mult(int ,int );
float div(int ,int );
int power(int , int );

main(){
	int choice = 1, num1, num2, res;
	
	while(choice != 0){
		printf("\n*****CALCULATOR*****\nPress 0 to Exit\nPress 1 to \nPress 2 to Subtraction\nPress 3 to Multiplication\nPress 4 to division\nPress 5 to power");
		printf("\nEnter your choice:\n");
		scanf("%d",&choice);
		if(choice == 0)
			break;
		printf("Enter the 1t number:\n");
		scanf("%d",&num1);
		printf("Enter the 2st number:\n");
		scanf("%d",&num2);
		switch(choice){
			case 1:
				printf("%d",add(num1,num2));
				break;
			case 2:
				printf("%d",sub(num1,num2) );
				break;
			case 3:
				printf("%d",mult(num1,num2) );
				break;
			case 4:
				printf("%f",div(num1,num2) );
				break;
			case 5:
				printf("%d",power(num1,num2) );
				break;
			default:
				break;
		
				
		}
	}
}


int add(int a, int b){
	int c;
	c = a + b;
	return c;
}

int sub(int a, int b){
	int c;
	c = a - b;
	return c;
}

int mult(int a,int b){
	int c;
	c = a*b;
	return c;
}

float div(int a,int b){
	float c;
	c = (float)a/b;
	return c;
}

int power(int a, int b){
	int c;
	for(c = 1;b>0;b--){
		c = c*a;
	}
	return c;
}
