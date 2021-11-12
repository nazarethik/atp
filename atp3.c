#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int  grade ;
    do
    {
        grade = get_int("k: ");
    }
    while (grade<=0);
   switch (grade)
    {
        case 1:
            printf("Погано\n");
            break;
        case 2:
            printf("Незадовільно\n");
            break;
        case 3:
            printf("Задовільно\n");
            break;
        case 4:
            printf("Добре\n");
            break;
        case 5:
            printf("Відмінно\n");
            break;
        default:
            printf("Помилка\n");
            break;
    }
}