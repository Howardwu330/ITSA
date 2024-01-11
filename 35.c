#include<stdio.h>  
int main(){  
    int array[100];  
  
    for(int i=0;i<6;i++){  
        scanf("%d",&array[i]);  
    }  
    int temp=0;  
    for(int i=0;i<6;i++){  
        temp+=array[i]*array[i]*array[i];  
    }  
    printf("%d",temp);  
    printf("\n");  
    return 0;  
}  