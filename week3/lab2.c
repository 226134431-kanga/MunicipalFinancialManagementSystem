#include <stdio.h>

int main(){

    char supplierName[50];
    double price;
    double budget;
    int registered;
    int documentsComplete;

    printf("Enter Supplier name: ");
    scanf("%s", &supplierName);

    printf("Enter Supplier price: ");
    scanf("%lf", &price);

    printf("Enter Bugdget: ");
    scanf("%lf", &budget);

    printf("Is Supplier registed? (1=Yes, 0=No): ");
    scanf("%d", &registered);

    printf("Are all the documents complete? (1=Yes, 0=No): ");
    scanf("%d", &documentsComplete);

    printf("\n-----------------------------\n");
    printf("Snupplier: %s\n", supplierName);
    printf("Supplier Price: %.2f\n", price);
    printf("Budget: %.2f\n", budget);
    
    if (registered == 1 && documentsComplete == 1 && price <= budget)
    {
        printf("Status: Qualified\n");
    }
    else
    {
        printf("Status: Disqualified\n");
    }
    return 0;
}