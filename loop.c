#include<stdio.h>

void main(){
	
	int a,b;
	
	printf("Enter the Number:");
	scanf("%d  %d",&a,&b);
	
	while(a<=b)
	{
		printf("%d - %d\n",a,a*a);
		a++;
		
	}
	
	
}
