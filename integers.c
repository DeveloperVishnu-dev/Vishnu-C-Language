#include<stdio.h>
void main(){
	int a;
	printf("Enter the First value:- ");
	scanf("%i", &a);
	if(a==0){
	printf("Your value is Neutral");
	}else if(a < 0){
	printf("Your value is Negative");	
	}else if(a > 0){
	printf("Your value is Positive");
	}
	
	}
