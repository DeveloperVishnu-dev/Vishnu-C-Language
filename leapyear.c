#include <stdio.h>
void main() {
    int year, i;
    for(i = 1; i <= 3; i++){   
    printf("Enter year: ");
    scanf("%d", &year);
    if(year % 4 == 0 && year % 100 != 0){
    printf("Leap Year\n");
	}else{
	printf("Not Leap Year\n");
	}
    }
}
