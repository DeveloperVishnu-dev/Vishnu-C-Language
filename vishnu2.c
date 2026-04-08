#include<stdio.h>
void main(){
	float HRA, DA, TA, Salary, area;
	printf("ENTER THE HRA:- ");
	scanf("%f", &HRA);
	area = HRA/100;
	printf("The Answer of HRA %.2f\n", area);
	
	printf("ENTER THE DA:- ");
	scanf("%f", &DA);
	area = DA/100;
	printf("The Answer of DA %.2f\n", area);
	
	printf("ENTER THE TA:- ");
	scanf("%f", &TA);
	area = TA/100;
	printf("The Answer of TA %.2f\n", area);
	
	int a = HRA;
    int a0 = DA;
    int a1 = TA;
    int Sum = a + a0 + a1;
    printf("Sum of %d and %d and %d is %d\n", a, a0, a1, Sum);
    
    printf("ENTER THE SALARY:- ");
	scanf("%f", &Salary);
	area = Salary + HRA + DA + TA;
	printf("The Answer of HRA %.1f\n", area);
	
}
