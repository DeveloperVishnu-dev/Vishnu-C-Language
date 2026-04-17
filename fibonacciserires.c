#include<stdio.h>
void main(){
    int n, i=1;
    int a=0, b=1, result;
    printf("Enter number:- ");
    scanf("%d", &n);
    printf("Fibonacci Series:\n");
    do{
    printf("%d ", a);
    result = a + b;
    a = b;
    b = result;
    i++;
    }while(i <= n);
}
