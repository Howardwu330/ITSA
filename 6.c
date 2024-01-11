#include <stdio.h>  
#include <math.h>  
  
int main() {  
    int num;  
    while(scanf("%d",&num)!=EOF){  
    double kilo=round(num*1.6*10)/10.0;  
    printf("%.1f\n",kilo);  
    }  
    return 0;  
}  