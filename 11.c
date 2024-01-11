#include <stdio.h>  
  
int main() {  
    int ticketPrice;  
    scanf("%d", &ticketPrice);  
    int nt10Count = ticketPrice / 10;  
    int nt5Count = (ticketPrice % 10) / 5;  
    int nt1Count = (ticketPrice % 10) % 5;  
    printf("NT10=%d\n", nt10Count);  
    printf("NT5=%d\n", nt5Count);  
    printf("NT1=%d\n", nt1Count);  
  
    return 0;  
}  