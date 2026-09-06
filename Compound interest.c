#include <stdio.h>
#include <math.h>
int main() 
{
    float principal, rate, amount, ci;
    float n;      
    float t;      

    printf("Enter Principal, annual Rate (as decimal, e.g. 0.10 for 10%%), ");
    printf("\ntimes compounded per year (n), and Time in years (t): ");
    scanf("%f %f %f %f", &principal, &rate, &n, &t);

    amount = principal * pow((1 + rate / n), n * t);
    ci = amount - principal;

    printf("Amount (A) = %f\n", amount);
    printf("Compound Interest = %f\n", ci);
    return 0;
}
