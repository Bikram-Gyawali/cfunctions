#include<stdio.h>

 int add(int a, int b);
 int main(){
 	int i,j;
 	printf("enter 2 num");
 	scanf("%d%d",&i,&j);
 	add(i,j);
 	return 0;
 }
 int add(int c,int d){
 	int sum;
 	sum=c+d;
 	printf("The sum is %d",sum);
 }


