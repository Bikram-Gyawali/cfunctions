#include<stdio.h>

 int prod(int a, int b);
 int main(){
 	int i,j;
 	printf("enter 2 num");
 	scanf("%d%d",&i,&j);
 	prod(i,j);
 	return 0;
 }
 int prod(int c,int d){
 	int multi;
 	multi=c * d;
 	printf("The multiplication is %d",multi);
 }


