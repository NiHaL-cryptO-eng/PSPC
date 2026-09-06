#include <stdio.h>
int main()
 {
    float length, breadth, area;
    printf("Enter length and breadth: ");
    scanf("%f %f", &length, &breadth);
    area = length * breadth;
    printf("Area of Rectangle = %.2f\n", area);
    return 0;
}
