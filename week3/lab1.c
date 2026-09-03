#include <stdio.h>

int main(){

    double salary=0.00;
    double housingAllowance=0.00;
    double transportAllowance=0.00;
    double taxAmount=0.00;
    double grossSalary=0.00;
    double netSalary=0.00;

    //1. Ask user for salary
    printf("Enter the Salary: ");
    scanf("%lf", &salary);
    //2. Ask the user for housing allowance
    printf("Enter the Housing Allowance: ");
    scanf("%lf", &housingAllowance);
    //3. Ask user for transport allowance
    printf("Enter the Transport Allowance: ");
    scanf("%lf", &transportAllowance);
    //4. Ask user for Tax amount
    printf("Enter the Tax Amount: ");
    scanf("%lf", &taxAmount);
    //5. Calculate the Gross
    grossSalary = salary + housingAllowance + transportAllowance;
    //6. Display the Gross
    netSalary = grossSalary - taxAmount;

    printf("\nGross Salary: %.2f\n", grossSalary);
    printf("\nNet Salary: %.2f", netSalary);

    return 0;
}