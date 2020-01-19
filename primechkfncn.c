#include<stdio.h>
int main(){
	int a,rslt;
	printf("Enter any num");
	scanf("%d",&a);
	rslt=prime(a);
	if(rslt){
		printf("it is prime num");
	}else{
		printf("it is not prime num");
	}
	
}
int prime(int x){
	int i,j,k,b,c;
	for(i=2;i<(x-1);i++){
		if(x%i!=0){
			return 1;
		}else{
			return 0;
		}
	}
}
