#include <stdio.h>
int rectangle(int leng,int bread){
	
	int area;
	area=leng*bread;
	return area;
}
int main(){
	int l=5,b=2;
	int area=rectangle(l,b);
	printf("%d",area);
}
