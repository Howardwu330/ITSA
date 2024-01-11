#include <stdio.h>  
  
int main() {  
    int i;  
  
    while(scanf("%d", &i)!=EOF){  
        if (i < 31) {  
            int result = 1 << i;  
            printf("%d\n", result);  
        }  
        else {  
            printf("Value of more than 31\n");  
        }  
    }  
  
    return 0;  
}  