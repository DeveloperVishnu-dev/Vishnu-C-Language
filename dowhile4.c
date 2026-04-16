#include <stdio.h>
int main(){
    int n;
    printf("Enter the ODD number:- ");
    scanf("%d", &n);
    printf("Odd numbers from %d to 1 are:\n", n);
    int i = n;
    do {
    if (i % 2 != 0) {
    printf("%d\n", i);
	}
	i--;
    } while (i >= 1);
}

