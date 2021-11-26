
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int count = 0;
    do
    {
        printf("Input count:");
        scanf("%i", &count);
    }
    while((count < 1) || (count > 100));
    
    int negative_count;
    int numbers[count];
    for (int i=1; i <= count; i++)
    {
        int number;
        printf("Input number %i:", i);
        scanf("%i", &number);
        if(abs(number) > 100)
        {
            printf("Incorrect input.");
            return 0;
        }
        
        numbers[i - 1] = number;
        
        if (number < 0)
        {
            negative_count++;    
        }    
    
    
    }
    
    printf("negative count: %i\n", negative_count);
    
    for (int i=count - 1; i >= 0; i--)
    {
        if (numbers[i] < 0)
        {
            printf("%i ", numbers[i]);  
        }
    }
    
    if (negative_count == 0)
    {
        printf("No");    
    }    
}