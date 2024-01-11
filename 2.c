#include <stdio.h>  
  
int main() {  
    int num1, num2;  
  
    while (scanf("%d %d", &num1, &num2) != EOF) {  
        double area=(num1*num2)/2.0;  
        printf("%.1f\n", area);  
    }  
  
    return 0;  
}  