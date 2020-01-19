#include<stdio.h>

int intrest();
int main(){
	int teer;
	teer=intrest();
	printf("the simple intrest is %d",teer);
	return 0;	
}
int intrest(){
	int si,p,t,r;
	printf("enter principl,time and rate");
	scanf("%d %d %d",&p,&t,&r);
	si=(p*t*r)/100;
	return si;
}
