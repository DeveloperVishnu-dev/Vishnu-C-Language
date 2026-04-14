#include <stdio.h>
void main() {
    float percentage;
    int category;
    printf("Enter percentage: ");
    scanf("%f", &percentage); 
    category = (percentage >= 90) ? 1 :
               (percentage >= 70) ? 2 :
               (percentage >= 65) ? 3 :
               (percentage >= 45) ? 4 : 5;
    switch (category){
        case 1:
            switch (1) {
            	case 1:
                    printf("Grade: A\n");
                    printf("Performance : Excellent Grade");
                    break;
            }
            break;
        case 2:
            switch (1){
            	case 1:
                    printf("Grade: B\n");
                    printf("Performance : Very Good Grade");
                    break;
            }
            break;
        case 3:
            switch (1){
            	case 1:
                    printf("Grade: C\n");
                    printf("Performance : Good But work hard");
                    break;
            }
            break;
        case 4:
            switch (1){
            	case 1:
                    printf("Grade: D\n");
                    printf("Performance : Average Grade");
                    break;
            }
            break;
        case 5:
            switch (1){
            	case 1:
                    printf("Grade: F\n");
                    printf("Performance : You are Fail");
                    break;
            }
            break;
    }
}
