#include<stdio.h>
int main() {
	int x,y;
	printf("enter any two num");
	scanf("%d%d",&x,&y);
	add(x,y);
	
}
int add(int c,int d) {
	int sum;
	sum=c+d;
	printf("The sum is %d\n",sum);
		sub(c,d);

}
int sub(int c,int d) {
	int diff;
	diff=c - d;
	printf("The difference is %d\n",diff);
}


