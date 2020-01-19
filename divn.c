#include<stdio.h>

 int main(){
 	int i,j;
 	printf("enter 2 num:");
 	scanf("%d%d",&i,&j);
 	div(i,j);
 	return 0;
 }
 int div(int c,int d){
 	int bhag;
 	bhag=c / d;
 	printf("The didvision is %d",bhag);
 }


