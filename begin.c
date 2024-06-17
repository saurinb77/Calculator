#include <stdio.h>

int main (void)
{
    int number;
    int e; 

    printf("Enter a number\n");
    
    scanf("%d", &number);

    e = number * 3;

    printf("The calculation is: %d ", number);
}