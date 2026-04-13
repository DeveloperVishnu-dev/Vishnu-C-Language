#include <stdio.h>
void main() {
    int a;
    int b;
    int c;
    int area;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    // Nested ternary
    area = (a < b)
    ? ( (a < c) ? a : c )
    : ( (b < c) ? b : c );
    printf("Minimum number is: %d\n", area);
}
