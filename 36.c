#include <stdio.h>  
  
int main() {  
    char input[1000];  
    int frequency[128] = {0};    
  
    fgets(input, sizeof(input), stdin);  
  
    for (int i = 0; input[i] != '\0' && input[i] != '\n'; ++i) {  
        if (input[i] >= 32 && input[i] < 128) {  
            frequency[input[i]]++;  
        }  
    }  
  
    for (int i = 127; i >= 32; --i) {  
        if (frequency[i] > 0) {  
            printf("%d %d\n", i, frequency[i]);  
        }  
    }  
  
    return 0;  
}  