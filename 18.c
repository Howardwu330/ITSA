#include <stdio.h>  
  
int main() {  
    int num;  
    while(scanf("%d",&num)!=EOF){  
        for (int i = 7; i >= 0; i--) {  
            printf("%d", (num >> i) & 1);  
        }  
        printf("\n");  
    }  
    return 0;  
}  