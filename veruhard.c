#include <stdio.h>
int main() {
    float m1, m2, m3, m4, avg;
    printf("Enter 4 marks:\n");
    scanf("%f %f %f %f", &m1, &m2, &m3, &m4);
    // Check if any mark is greater than 100
    if(m1 > 100 || m2 > 100 || m3 > 100 || m4 > 100) {
        printf("Invalid\n");
    } else {
        avg = (m1 + m2 + m3 + m4) / 4;
        printf("Average = %.2f\n", avg);
    }
    return 0;
}
