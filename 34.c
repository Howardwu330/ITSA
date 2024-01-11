#include <stdio.h>  
  
int f91(int num){  
    if(num<=100){  
        return f91(f91(num+11));  
    }  
    else{  
        return num-10;  
    }  
}  
int main() {  
    int num;  
    scanf("%d",&num);  
    int arr[num];  
    for(int i=0;i<num;i++){  
        scanf("%d",&arr[i]);  
    }  
    for(int i=0;i<num;i++){  
        int result=f91(arr[i]);  
        printf("%d\n",result);  
    }  
    return 0;  
}  