#include <stdio.h>

int main()
 {
    // declare PI as a constant
    const float PI = 3.14159; 
    float radius, height, volume, surface_area;

    //prompts for input from user
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    //Calculation of volume
    volume = PI * radius * radius * height;

    //Calculation of surface area
    surface_area = 2 * PI * radius * radius + 2 * PI * radius * height;

    //Display results after calculation
    printf("Volume of the cylinder: %f cubic units\n", volume);
    printf("Surface area of the cylinder: %f square units\n", surface_area);

    return 0;
}
