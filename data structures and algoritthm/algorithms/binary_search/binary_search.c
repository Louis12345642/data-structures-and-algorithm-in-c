#include <stdio.h>
// starting time and space complixity of the algorithm
int binary_search(int target, int items[], int first, int midpoint, int last)
{
    // check if the target is equal to midpoint if true retuen the target
    if (target == items[midpoint])
    {
        return midpoint;
    }
    // if not true we need to check exactly which side is the target
    if (target < items[midpoint])
    {
        // check the position of last and forget the greator values
        last = midpoint - 1;
        return binary_search(target, items, first, (first + last)/2, last);
    }
    else if (target > items[midpoint])
    {
        first = (midpoint + 1);
        return binary_search(target, items, first, (first +last)/2, last);
    }
    return -1;
}
int main()
{

    int target = 4;
    int items[] = {1, 2, 3, 4, 5, 6, 7, 35};
    int first = 0;
    int last = sizeof(items) / 4 - 1;
    int midpoint = (first + last) / 2;

    printf("%d", binary_search(target, items, first, midpoint, last));
    

    return 0;
}