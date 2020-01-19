#include<stdio.h>
int main()
{
	int a,rslt;
	printf("enter any num");
	scanf("%d",&a);
	rslt=armstrong(a);
	if(rslt){
		printf("it is armstrong");
	}else{
		printf("it is not armstrong.");
	}
}
int armstrong(int x){
	int i,b,c,d,j,k;
	int temp=x;
	while(x!=0){
		i=x%10;
		j=j+(i)*(i)*(i);
		x=x/10;
	}if(j==temp){
		return 1;
	}else{
		return 0;
	}
}
