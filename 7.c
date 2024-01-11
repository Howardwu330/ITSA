#include <stdio.h>  
#include <math.h>  
  
int main() {  
    int num;  
    while(scanf("%d",&num)!=EOF){  
        int squre=num*num;  
        int cube=num*num*num;  
        printf("%d %d %d\n",num,squre,cube);  
    }  
    return 0;  
}  