#include <stdio.h>  
#include <math.h>  
  
int main() {  
    int a,b;  
      
    while(scanf("%d %d",&a,&b)!=EOF){  
        double radius;  
        radius=sqrt(a*a+b*b);  
        if(radius<=100){  
            printf("inside\n");  
        }  
        else{  
            printf("outside\n");  
        }  
    }  
    return 0;  
}  