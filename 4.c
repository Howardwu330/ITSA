#include <stdio.h>  
  
int main() {  
    int num;  
    while(scanf("%d",&num)!=EOF){  
        long long int sum=1;  
        for(int i=1;i<=num;i++){  
            sum*=i;  
        }  
        printf("%lld\n",sum);  
    }  
    return 0;  
}  