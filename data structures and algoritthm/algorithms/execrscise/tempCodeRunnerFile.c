#include <stdio.h>
int main()
{
    int count = 4;
    printf("The initail value of count: %d \n \n", count); // output will be 4

    printf("Count will be decremented by one and then operaton: %d \n \n", --count);

    printf("Count will be printed first: %d \n \n", count--); 

    /*Count will be printed first. The output is 3. Then count will be decreamented by 1 to 2.*/
    
    printf("Count will be decreamted by 1 to 2: %d", count); //output will be 2
}