#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	scanf("%s",&str);
	int i,j,n = strlen(str);
	for(i=1; i<=n; i++){
		for(j=0; j<i; j++){
			printf("%c",str[j]);
		}
		printf("\n");
	}
}
