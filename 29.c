#include <stdio.h>  
  
int main() {  
    int a,b,c;  
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){  
        if(a+b>c && b+c>a&&  c+a>b){  
            printf("fit\n");  
        }  
        else{  
            printf("unfit\n");  
        }  
    }  
    return 0;  
}  