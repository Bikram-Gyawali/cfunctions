#include <stdio.h>
int main(){ //with no retrurn type and no arguyments..
	circle();
return 0;
}
void circle(){
	int r;
	printf("Entr the radius of circle");
	scanf("%d",&r);
	int area =(22/7) * (r*r);
	printf("The area of circle is: %d",area);
}
