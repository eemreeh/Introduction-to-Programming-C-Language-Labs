#include <stdio.h>

int prime(int );

main(){
	int a, b, i;
	printf("Enter two defined integer numbers\n");
	scanf("%d%d",&a,&b);
	printf("Prime numbes between %d and %d are:  ",a,b);
	for(a;a<=b;a++){
		if(!prime(a))
			printf("%d  ",a);
			
	}
	
		
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
