#include<stdio.h>
#define SIZE 40

void printWord(char sentence[],int wordNum);
int findLenght(char word[]);
void findWord(char sentence[],char word[],int wordLenght);

int main(){
	char sentence[] = "EE103 Introduction to Programming";
	int wordNum;
	char word[SIZE];
	printf("Enter the word number \n");
	scanf("%d",&wordNum);
	fflush(stdin);
	printWord(sentence,wordNum);
	printf("\nEnter the word:\n");
	gets(word);
	printf("Word lenght is %d\n",findLenght(word));
	findWord(sentence,word,findLenght(word));
	system("pause");
	return 0;
}

void printWord(char sentence[],int wordNum){
	int i,j = 0,a,b,space[100],counter=0;
	for(i = 0; sentence[i] != '\0';i++){
		if(sentence[i] == ' '){
			space[j] = i;
			j++;
			//printf("%d",space[j-1]);
		}	
	}
	if (wordNum == 1){
		for(a == 0;sentence[a] != ' ';a++){
			printf("%c",sentence[a]);
		}
	}else {
		for(b = 0;sentence[b] != '\0';b++){
			if (sentence[b] == ' ')
				counter++;
			if(counter == wordNum){
				printf("%c",sentence[b+1]);
			}
		}
	}
	
}

int findLenght(char word[]){
	int i = 0,count = 0;
	while(word[i] != '\0'){
		count++;
		i++;
	} 
	return count;
}

void findWord(char sentence[],char word[],int wordLenght){
	int i,j=0,k=0;
	for(i = 0;sentence[i] != '\0';i++){
		if(sentence[i] == word[k]){
			k++;
		}
	}
	if(k == wordLenght){
		printf("Word is a part of sentence");
	}else {
		printf("Word is not a part of sentence");
	}

}


