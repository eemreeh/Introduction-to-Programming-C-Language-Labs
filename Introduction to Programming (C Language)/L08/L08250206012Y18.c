#include <stdio.h>
#include <string.h>

main(){
	int i, size,k,flag,j,flag2;
	char word[] = "FREEDOM";
	char g;
	size = strlen(word);
	char guess[] = "_______";
	int turn = 6;
	k = turn;
	while(k != 0){
		flag2 = 1;
		flag = 0;
		printf("\nYou have %d turns left. Enter the letter.\n",k);
		printf("%s\n",guess);
		scanf("%1c",&g);
		g = toupper(g);
		getchar();
		for(i = 0;i<size;i++){
			if(word[i] == g){
				guess[i] = g;
				
				flag = 1;
			}
		}
		if (flag == 0){
			printf("\nwrong\n");
			k -= 1; 
		}else
			printf("\nCorrect\n");
			
		for(j=0;j<size;j++){
			if(guess[j] == '_')
				flag2 = 0;
		}
		if (flag2 == 1){
			printf("You WON!");
			break;
		}
		if (k == 0)
			printf("You lost!");
	}
	
	
	
}
