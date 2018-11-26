#include <stdio.h>
 
void main()
{
    int num;
    scanf("%d", &num);
    if (num > 0)
        printf("positive number");
    else if (num < 0)
        printf("negative number");
    else
        printf("Zero");
}