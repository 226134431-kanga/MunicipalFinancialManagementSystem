#include <stdio.h>
int main() {
    
 double revenue;
 double expenses;
 double balance;
 int departments;
 double payroll;
 double procurement;
 double assets;
    
 printf("MUNICIPAL BUDGET CALCULATOR\n");
 printf("---------------------------\n");
    
 printf("Enter total revenue: ");
 scanf("%lf", &revenue);
    
 printf("Enter total expenses: ");
 scanf("%lf", &expenses);
    
 balance = revenue - expenses;
    
 printf("\nRevenue: %.2f\n", revenue);
 printf("Expenses: %.2f\n", expenses);
 if (balance > 0) {
 printf("Surplus: %.2f\n", balance);
 }
 else if (balance < 0) {
 printf("Deficit: %.2f\n", -balance);
 }
 else {
 printf("The budget is balanced.\n");
 }

 printf("\nEnter number of departments: ");
 scanf("%d", &departments);

 printf("Enter payroll: ");
 scanf("%lf", &payroll);

 printf("Enter procurement: ");
 scanf("%lf", &procurement);

 printf("Enter assets: ");
 scanf("%lf", &assets);

 printf("MUNICIPAL FINANCIAL SUMMARY\n");
 printf("-----------------------------\n");
 printf("Departments: %d\n", departments);
 printf("Payroll: %.2f\n", payroll);
 printf("Procurement: %.2f\n", procurement);
 printf("Assets: %.2f\n", assets);

 return 0;
}