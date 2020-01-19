#include<stdio.h>

 int sub(int a, int b);
 int main(){
 	int i,j;
 	printf("enter 2 num");
 	scanf("%d%d",&i,&j);
 	sub(i,j);
 	return 0;
 }
 int sub(int c,int d){
 	int diff;
 	diff=c - d;
 	printf("The difference is %d",diff);
 }


