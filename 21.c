#include <stdio.h>  
int main() {  
    int num1,num2;  
    while(scanf("%d %d",&num1,&num2)!=EOF){  
        if(num1>num2){  
            int temp=num1;  
            num1=num2;  
            num2=temp;  
        }  
        int sum=0;  
        for(int i=num1;i<=num2;i++){  
           sum+=i;  
        }  
        printf("%d\n",sum);  
    }  
    return 0;  
}  