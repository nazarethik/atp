#include <cs50.h>
#include <stdio.h>

int main(void){
    int a,b;
    int amount;
    do
    {
        a = get_int("Insert A: ");
        b = get_int("Insert B: ");    
    }
    while(a>=b);
    amount = (b-a);
    for(int i=b-1; i>a; i--)
    {
            printf("%i\n",i);
            
            
    }    
    printf("%i\n",amount);
}

