#include<stdio.h>
int main() {
	int a,rslt;
	printf("enter any num");
	scanf("%d",&a);

	rslt=reverse(a);
	if(rslt) {
		printf("It is palindrome");
	} else {

		printf("it is not palindrome num.");
	}
 		
}
int reverse(int x) {
	int y;
	int z;
	int temp =  x;
	while (x!=0) {
		y=x%10;
		z=z*10+y;
		x=x/10;
	}
	if(z == temp) {
		return 1;
	} else {
		return 0;
	}
}
