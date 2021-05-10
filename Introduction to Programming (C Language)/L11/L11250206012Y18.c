#include<stdio.h>

int main(){
	char character[8];
	int i,sum = 0,count = 0;
	printf("Please Enter the Character of Array:");
	gets(character);
	for(i = 0;i<8;i++){
		if(character[i]<='Z' && character[i]>='A'){
				goto END;
			}
		if(character[i] > '0' && character[i] <= '9'){
			if(count == 0){
				sum += (character[i] - '0')*10;
				count = 1;
			}else if(count == 1){
				sum += character[i] - '0';
				count = 0;
			}
		}
	}
	END:
	printf("%d",sum);
	return 0;
}
