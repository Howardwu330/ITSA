#include <stdio.h>  
  
int main() {  
    int second;  
    scanf("%d",&second);  
    int minutes=0,hours=0,days=0;  
    while(second>=60){  
        if(hours>=24){  
            hours-=24;  
            days+=1;  
        }  
        else if (minutes>=60){  
            minutes-=60;  
            hours+=1;  
        }  
        else if (second>=60){  
            second-=60;  
            minutes+=1;  
        }  
    }  
    printf("%d days\n%d hours\n%d minutes\n%d seconds\n",days,hours,minutes,second);  
    return 0;  
}  