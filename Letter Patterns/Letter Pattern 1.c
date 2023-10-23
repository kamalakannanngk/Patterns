#include<stdio.h>
int main(){
	char ch,i,j;
	scanf("%c",&ch);
	for(i=ch; i>='A'; i--){
		for(j=i; j<=ch; j++){
			printf("%c ",j);
		}
		printf("\n");
	}
}
