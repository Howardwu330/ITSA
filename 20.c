#include <stdio.h>  
#include <math.h>  
  
int main() {  
    int num;  
    scanf("%d",&num);  
    for(int i=1;i<num+1;i++){  
        int square=i*i;  
        printf("%d*%d=%d\n",i,i,square);  
    }  
      
  
    return 0;  
}  