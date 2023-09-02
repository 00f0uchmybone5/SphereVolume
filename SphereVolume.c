#include <stdio.h>

main()
{
    float pi = 3.14, radius, volume;
    printf("This program will calculate the volume of your sphere.\n");
    printf("Enter your radius: ");
    scanf("%f", &radius);

    volume = 4 / 3 * pi * radius ^ 3;

    printf("The volume of your sphere is: ", volume);
    return 0;
}