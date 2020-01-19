#include<stdio.h>
int main(){
	int numsq;  //without arguments and with return type;
	numsq=check();
	
	if(numsq){
		printf("This number is square");
	}else{
		printf("This number is not square");
	}
	return 0;
}
int check(){
	int i,a,b,c;
	printf("Enter any num\t:");
	scanf("%d",&a);
	
	for(i=1;i<a;i++){
		b=i*i;
		if(b==a){
			return 1;
		}else if(b>a){
			return 0;
		}
	}
}
