#include <stdio.h>

int main()
{
    int cYear;
    int yAge;
    printf("Current Year:");
    scanf("%d", &cYear);
    printf("Your birth date:");
    scanf("%d", &yAge);
    printf("Your age is: %d\n", cYear-yAge);

    return 0;
}
