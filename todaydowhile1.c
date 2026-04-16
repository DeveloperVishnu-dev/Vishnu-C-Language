#include <stdio.h>
int main(){
    int n;
    printf("Enter the EVEN number:- ");
    scanf("%d", &n);
    printf("Even numbers from 1 to %d are:\n", n);
    int i = n;
    do {
    if (i % 2 != 1) {
    printf("%d\n", i);
	}
	i--;
    } while(i >= 1);
}
