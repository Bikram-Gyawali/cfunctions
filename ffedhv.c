#include<stdio.h>
#include<conio.h>
int add(int x,int y,int a,int b) {
	printf("\nthe addition of complex num id %d +i%d",x + b,y + a);
}
int substract(int x,int y,int a,int b) {
	printf("\nthe substraction of complex num id %d -i%d",x - a,y - b);
}
int multiply(int x,int y,int a,int b) {
	int real,imag;
	real=(a*x-b*y);
	imag=(a*y+b*x);
	printf("\n The multiplication of complex numbers is:%d+i%d",real,imag);
}
int main() {
	int x,y,a,b;
	printf("enter first complex num");
	scanf("%d+i%d",&x,&y);
	printf("enter second complex num");
	scanf("%d +i%d",&a,&b);
	add(x,y,a,b);
	substract(x,y,a,b);
	multiply(x,y,a,b);
  
}
