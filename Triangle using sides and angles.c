#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main()
 {
    float a, b, c;
    float angleA, angleB, angleC;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    
    angleA = acos((b*b + c*c - a*a) / (2*b*c)) * 180 / PI;
    angleB = acos((a*a + c*c - b*b) / (2*a*c)) * 180 / PI;
    angleC = 180 - angleA - angleB;

    printf("Angle A = %.2f degrees\n", angleA);
    printf("Angle B = %.2f degrees\n", angleB);
    printf("Angle C = %.2f degrees\n", angleC);
    return 0;
}
