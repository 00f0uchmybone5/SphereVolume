#include <math.h>
#include <stdio.h>


main()
{
    double pi = M_PI;
    float radius, volume;
    printf("This program will calculate the volume of your sphere.\n");
    printf("Enter your radius: ");
    scanf("%f", &radius);

    volume = (4.0 / 3.0) * pi * radius * radius * radius;

    printf("The volume of your sphere is: %.1f\n", volume);
    return 0;
}