#include<stdio.h>
int main(){
	char ch,i,j,ch2='A';
	scanf("%c",&ch);
	for(i='A'; i<=ch; i++){
		for(j='A'; j<=i; j++){
			printf("%c",ch2);
			ch2 += 1;
		}
		printf("\n");
	}
}
