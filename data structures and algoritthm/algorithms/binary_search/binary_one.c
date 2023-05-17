#include <stdio.h>

int binary_search(int target, int items[], int first, int midpoint, int last) {
    if (target == items[midpoint]) {
        return midpoint; // target found at midpoint
    }
    if (target < items[midpoint]) {
        last = midpoint - 1; // adjust the last index
        return binary_search(target, items, first, (first + last) / 2, last);
    } else if (target > items[midpoint]) {
        first = midpoint + 1; // adjust the first index
        return binary_search(target, items, first, (first + last) / 2, last);
    }
    return -1; // target not found
}

int main() {
    int target = 35;
    int items[] = {1, 2, 3, 4, 5, 6, 7, 35};
    int first = 0;
    int last = sizeof(items) / sizeof(items[0]) - 1;
    int midpoint = (first + last) / 2;

    printf("%d", binary_search(target, items, first, midpoint, last));

    return 0;
}
