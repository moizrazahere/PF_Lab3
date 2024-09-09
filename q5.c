//24K-1011
#include<stdio.h>
int main(){
	int P,R,T;
	printf("enter Principle between 100 Rs to 1000,000 Rs: ");
	scanf("%d",&P);
	printf("enter rate of interest between 5 to 10 : ");
	scanf("%d",&R);
	printf("enter time period between 1 to 10 years : ");
	scanf("%d",&T);
	float simpleInterest=(float)(P*R*T)/100;
	printf("Output: %f",simpleInterest);
}
