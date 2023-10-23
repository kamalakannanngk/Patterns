#include<stdio.h>
int main(){
	char ch,i,j;
	scanf("%c",&ch);
	for(i='A'; i<=ch; i++){
		for(j=i; j>='A'; j--){
			printf("%c ",j);
		}
		printf("\n");
	}
}
