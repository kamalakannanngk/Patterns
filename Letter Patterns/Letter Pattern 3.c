#include<stdio.h>
int main(){
	char ch,i,j;
	scanf("%c",&ch);
	int n=5,m=1;
	for(i='A'; i<=ch; i++){
		for(j=1; j<=n-m; j++){
			printf(" ");
		}
		m++;
		for(j='A'; j<=i; j++){
			printf("%c",j);
		}
		for(j=i-1; j>='A'; j--){
			printf("%c",j);
		}
		
		
		printf("\n");
	}
}
