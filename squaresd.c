#include<stdio.h>
 
 int inc();
int main(){    //function with no RGUMENTS AND  with return value
	int square;
	square=inc();
	printf("The square of the given num is %d",square);
	return 0;
}
int inc(){
	int a,b;
	printf("Enteer any num");
	scanf("%d",&a);
	b= a*a;
	return b; //return value;
}
