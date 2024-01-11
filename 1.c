#include <stdio.h>  
  
int main() {  
    int num1, num2, num3;  
  
    while (scanf("%d %d %d", &num1, &num2, &num3) != EOF) {  
        double sum = num1 + num2;  
        double area=(sum*num3)/2;  
        printf("Trapezoid area:%.1f\n", area);  
    }  
  
    return 0;  
}  