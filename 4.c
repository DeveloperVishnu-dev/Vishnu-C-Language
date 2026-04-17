#include<stdio.h>
void main(){
    int a, b, c;
    printf("Enter starting number: ");
    scanf("%d", &a);
    printf("Enter ending number: ");
    scanf("%d", &b);
    for(c=a; c<=b; c++){
    if(c%2==0){
    printf("%d\n", c);
    }
}
}
