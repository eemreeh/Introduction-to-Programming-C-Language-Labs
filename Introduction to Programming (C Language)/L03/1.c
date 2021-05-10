#include <stdio.h>

main(){
	int s[100];
	int i, j;
	for(j=0;j<100;j++){
		s[j] = j;
	}
	for(i = 0;i<100;i++){
		printf("%d. character is %d\n",i+1,s[i]);
	}
	
	
}
