#include<stdio.h>
int main(){
	float Celsius, farenheit, result;
	printf("Enter the celsius:- ");
	scanf("%f", &Celsius, &farenheit);
	result = (1.8 * Celsius) + 32;
	printf("The Answer is %f", result);
    return 0;
}
