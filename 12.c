#include <stdio.h>  
#include <math.h>  
  
int main() {  
    int distance;  
      
    while(scanf("%d", &distance)!=EOF){  
  
        int seconds = fabs(ceil((double)distance / (30 * 2.54 / 100 - 1))-1);  
         
        printf("%d\n", seconds);  
    }  
  
    return 0;  
}  