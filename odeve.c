#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    if(number % 2 == 0)
        printf("even");
    elseif(number % 2<=0)
        printf("invalid");
    return 0;
}