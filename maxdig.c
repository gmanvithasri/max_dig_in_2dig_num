#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    if (num>99 || num<10)
        printf("The number is not a 2 digit number");
    else
    {
        if (num%10>num/10)
            printf("Maximum digit is %d\n", num%10);
        else 
            printf("Maximum digit is %d\n", num/10);
    }
    return 0;
}
