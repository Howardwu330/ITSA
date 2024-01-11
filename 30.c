#include <stdio.h>  
#include <math.h>  
  
int main() {  
    int a,b,c;  
      
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){  
        if(a+b>c && b+c>a && c+a>b){  
            if(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a){  
                printf("Right Triangle\n");  
            }  
            else if(a * a + b * b < c * c || a * a + c * c < b * b || b * b + c * c < a * a){  
                 printf("Obtuse Triangle\n");  
            }  
            else{  
                printf("Acute Triangle\n");  
            }  
        }  
        else{  
            printf("Not Triangle\n");  
        }  
    }  
      
  
    return 0;  
}  