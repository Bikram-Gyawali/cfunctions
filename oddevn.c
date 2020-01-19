#include<stdio.h>
void oddevn();
int main(){
		oddevn();
		return 0;
}
void oddevn(){
	int a,b;
	printf("Enter any num");
	scanf("%d",&a);
	if(a % 2== 0){
		printf("it is evn num");
	}else{
		printf("it is odd num");
	}
}
