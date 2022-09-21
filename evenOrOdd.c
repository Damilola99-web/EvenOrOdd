#include <stdio.h>

int main() {
    int number;
    printf("Enter a number ");
    scanf("%d", &number);

    switch (number % 2)
    {
    case 0:
        printf("Even");
        break;
    
    default:
    printf("Odd");
        break;
    }
    
}