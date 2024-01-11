#include <stdio.h>  
  
int main() {  
    int num;  
    while(scanf("%d", &num)!=EOF){  
        int originum, x,result=0;  
        originum=num;  
        while(originum!=0){  
            x=originum%10;  
            result=result+(x*x*x);  
            originum/=10;  
        }  
        if(result==num){  
            printf("Yes\n");  
        }  
        else{  
            printf("No\n");  
        }  
    }  
    return 0;  
}  