#include <stdio.h>  
  
int main() {  
    int num,sum=1;  
    scanf("%d",&num);  
    printf("1");  
    for(int i=2;i<=num;i++){  
        sum+=i;  
        printf(" + %d",i);  
          
    }  
    printf(" = %d\n",sum);  
    return 0;  
}  