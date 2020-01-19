#include<stdio.h>
int main() {
	int a,b,rslt;
	printf("enter any num");
	scanf("%d",&a);
	rslt=reverse(a);
	printf("the reverse of entered num is %d..",rslt);
}
int reverse(int x) {
	int y;
	int z;
	while (x!=0) {
		y=x%10;
		z=z*10+y;
		x=x/10;
	}
	return z;
}
