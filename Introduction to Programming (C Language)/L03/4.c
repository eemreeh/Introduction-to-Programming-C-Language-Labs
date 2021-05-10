#include <stdio.h>

main(){
	int array1[100],array2[100],array3[100];
	int k, l;
	int i, j;
	for(j=0;j<100;j++){
		array1[j] = j;
		array2[j] = 99 - j;
	}
	for(i = 0;i<100;i++){
		array3[i] = array1[i] * array2[i];
	}
	printf("Enter the eindxs of the Array3");
	scanf("%d",&l);
	printf("Array3[%d] = %d",l,array3[l]);
	
}
