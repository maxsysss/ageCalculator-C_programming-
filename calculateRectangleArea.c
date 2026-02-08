#include <stdio.h>

int main()
{
    int length;
    int height;
    printf("Please enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Please enter the height of the rectangle: ");
    scanf("%d", &height);

    printf("Area: %d\n", length * height);

    return 0;
}