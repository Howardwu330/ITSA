#include <stdio.h>  
  
int main() {  
    int num1,num2;  
    while(scanf("%d %d",&num1,&num2)!=EOF){  
        int count=0;  
        while(num2>0){  
            if(num2%100==num1){  
                count++;  
            }  
            num2/=10;  
        }  
        printf("%d\n",count);  
    }  
    return 0;  
}  