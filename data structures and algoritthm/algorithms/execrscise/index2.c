#include <stdio.h>
int main()
{
    // creating two varible x and y
    int x, y;
    int sum;

    printf("enter the value of x");
    scanf("%d", &x);

    printf("enter the value of y");
    scanf("%d", &y);

    sum = (x + y);

    // printf("The sum is %d",sum);

    if (sum > 50)
    {
        printf("ULK is the best");
    }

    if (sum < 50)
    {
        printf("you join ulk");
    }

    else
    {

        printf("opps");
    }

    return 0;
}