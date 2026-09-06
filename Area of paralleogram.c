#include <stdio.h>
int main()
 {
    float base, height, area;
    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);
    area = base * height;
    printf("Area of Parallelogram = %f\n", area);
    return 0;
}

