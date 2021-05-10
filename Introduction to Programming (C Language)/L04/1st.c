#include<stdio.h>

int prime(int);

main(){
	int n, i;
	printf("Enter a positive number n:");
	scanf("%d",&n);
	if(prime(n))
		printf("This is not a prime number.");
	else
		printf("This is a prime number.");
		
	
	
}

int prime(int a){
	int i, flag;
	flag = 0;
	for(i = 2;i<a;i++){
		if(a % i ==0)
			flag = 1;
	}
	if(a == 1 || a == 0)
		flag = 1;
	return flag;
}
