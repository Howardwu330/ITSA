#include <stdio.h>  
#include <math.h>  
  
int main() {  
    int num1,num2;  
    while(scanf("%d %d",&num1,&num2)!=EOF){  
        int sum=num1+num2;  
        int square=sum*sum;  
        printf("%d\n",square);  
    }  
    return 0;  
}  