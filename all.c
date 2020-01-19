#include<stdio.h>
int main(int a,int b) {
	int x,y;
	printf("enter any two num");
	scanf("%d%d",&x,&y);
	add(x,y);
	sub(x,y);
	div(x,y);
	prod(x,y);
}
int add(int c,int d) {
	int sum;
	sum=c+d;
	printf("The sum is %d\n",sum);
}
int sub(int c,int d) {
	int diff;
	diff=c - d;
	printf("The difference is %d\n",diff);
}
int prod(int c,int d) {
	int multi;
	multi=c * d;
	printf("The multiplication is %d\n",multi);
}
int div(int c,int d) {
	int bhag;
	bhag=c / d;
	printf("The didvision is %d\n",bhag);
}

