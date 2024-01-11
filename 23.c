#include <stdio.h>  
  
int main() {  
    long long int num;  
    while(scanf("%lld",&num)!=EOF){  
        int count=0;  
        for(int i=2;i<num;i++){  
            if(num%i==0){  
                count=1;  
            }  
        }  
        if(count==0){  
            printf("YES\n");  
        }  
        else{  
            printf("NO\n");  
        }  
    }  
    return 0;  
}  