#include<stdio.h>
int main(){
	int a,b;
		
	scanf("%d",&a);
	scanf("%d",&b);
	printf("Input: a: %d , b: %d ",a,b);
		int temp=a;
		a=b;
		b=temp;
		
		printf("output: a: %d , b: %d ",a,b);
}