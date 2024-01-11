#include <stdio.h>  
  
int main() {  
    int num1, num2;  
  
    while (scanf("%d %d", &num1, &num2) != EOF) {  
        int sum = num1 + num2;  
        printf("%d\n", sum);  
    }  
  
    return 0;  
}  