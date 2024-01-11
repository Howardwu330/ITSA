#include <stdio.h>  
#include <math.h>  
  
int main() {  
    double celsius;  
  
    while(scanf("%lf", &celsius)!=EOF){  
  
        double fahrenheit = round((celsius * 9 / 5 + 32) * 10) / 10.0;  
      
        printf("%.1f\n", fahrenheit);  
    }  
  
    return 0;  
}  