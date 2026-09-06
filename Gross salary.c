#include <stdio.h>
int main() 
{
    float basic, da, hra, gross;

    printf("Enter Basic Pay: ");
    scanf("%f", &basic);

    
    da = 0.40 * basic;
    hra = 0.20 * basic;
    gross = basic + da + hra;

    printf("DA = %f\n", da);
    printf("HRA = %f\n", hra);
    printf("Gross Salary = %f\n", gross);
    return 0;
}
