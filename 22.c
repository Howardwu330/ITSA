#include <stdio.h>  
int isPrime(int num) {  
    if (num <= 1) {  
        return 0;  
    }  
    for (int i = 2; i * i <= num; i++) {  
        if (num % i == 0) {  
            return 0;   
        }  
    }  
    return 1;   
}  
int main() {  
    int num;  
    while(scanf("%d",&num)!=EOF){  
        for(int i=num-1;i>1;i--){  
           if(isPrime(i)){  
               printf("%d\n",i);  
               break;  
           }  
        }  
    }  
    return 0;  
}  