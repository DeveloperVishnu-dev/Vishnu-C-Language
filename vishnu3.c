#include<stdio.h>
void main(){
	float first_angle, second_angle, area;
	printf("Enter the first_angle:- ");
	scanf("%f", &first_angle);
	
	printf("Enter the second_angle:- ");
	scanf("%f", &second_angle);
	
	area = 180 - (first_angle + second_angle);
	printf("The Answer of Third Angle is %.2f\n", area);

}
