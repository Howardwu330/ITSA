#include <stdio.h>  
  
int main() {  
    int num;  
    while(scanf("%d", &num)!=EOF){  
        double x=0.0;  
        for(int i=1;i<=num;i++){  
            x=x+(pow(-1,i+1)*1.0/(2*i-1));  
        }  
        printf("%.3lf\n",x);  
    }  
    return 0;  
}  