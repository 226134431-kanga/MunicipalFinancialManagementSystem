#include <stdio.h>

int main() {

    double basicSalary;
    double housingAllowance;
    double transportAllowance;
    double tax;
    double grossSalary;
    double netSalary;

    printf("Enter basic salary: ");
    scanf("%lf", &basicSalary);

    printf("Enter housing allowance: ");
    scanf("%lf", &housingAllowance);

    printf("Enter transport allowance: ");
    scanf("%lf", &transportAllowance);

    printf("Enter tax: ");
    scanf("%lf", &tax);

    grossSalary = basicSalary + housingAllowance + transportAllowance;
    netSalary = grossSalary - tax;

    printf("Gross Salary: %.2f\n", grossSalary);
    printf("Net Salary: %.2f\n", netSalary);

    if (netSalary >= 20000) {
    printf("Income category: High Income\n");
        }
    else {
    printf("Income category: Standard Income\n");
        }

    return 0;
}