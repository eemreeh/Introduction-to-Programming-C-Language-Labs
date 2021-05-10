#include <stdio.h>

main(){
	int a, b, n, i, c;
	printf("Enter an integer number:");
	scanf("%d",&n);
	a = 0;
	b = 1;
	if(n == 0)
		printf("Fib(0)=0");
	else if(n == 1)
		printf("Fib(1)=1");
	else{
		for(i=1;i<n;i++){
			c = a + b;
			a = b;
			b = c;
					
		}
		printf("Fib(%d)=%d",n,b);
	}
	
	
	
}
