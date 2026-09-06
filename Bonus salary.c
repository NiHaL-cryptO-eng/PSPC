#include <stdio.h>
int main() 
{
    float salary, bonusPercent, bonus, totalSalary;

    printf("Enter Salary: ");
    scanf("%f", &salary);
    printf("Enter Bonus Percentage: ");
    scanf("%f", &bonusPercent);

    bonus = (salary * bonusPercent) / 100;
    totalSalary = salary + bonus;

    printf("Bonus Amount = %f\n", bonus);
    printf("Total Salary (with Bonus) = %f\n", totalSalary);
    return 0;
}
