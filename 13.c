#include <stdio.h>  
  
int main() {  
    int startHour, startMinute, endHour, endMinute;  
  
    scanf("%d %d", &startHour, &startMinute);  
    scanf("%d %d", &endHour, &endMinute);  
  
    int totalTime = (endHour - startHour) * 60 + (endMinute - startMinute);  
  
    int parkingFee = 0;  
    if (totalTime <= 120) {  
        parkingFee = totalTime / 30 * 30;  
    } 
    else if (totalTime <= 240) {  
        parkingFee = 4 * 30 + (totalTime - 120) / 30 * 40;  
    } 
    else {  
        parkingFee = 4 * 30 + 4 * 40 + (totalTime - 240) / 30 * 60;  
    }  
  
    printf("%d\n", parkingFee);  
  
    return 0;  
}  