#include<stdio.h>
int main(){
	int x1=5,y1=4,x2=3,y2=2;
	int sub= y2-y1;
	int sub1=x2-x1;
	float slope=(float)sub/sub1;
	printf("slope: %.3f",slope);
}