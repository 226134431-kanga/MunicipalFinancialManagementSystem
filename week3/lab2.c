#include <stdio.h>

int main(){

    char supplierName[10][50];
    double price [10];
    double budget = 100000.00;
    int qualified [10];
    int registered [10];
    int documentsComplete [10];

    for (int i=0; 1<10; i++)
    {
        printf("Enter Supplier name: ");
        scanf("%s", &supplierName[i]);

        printf("Enter Supplier price: ");
        scanf("%lf", &price[i]);

        printf("Is Supplier registed? (1=Yes, 0=No): ");
        scanf("%d", &registered[i]);

        printf("Are all the documents complete? (1=Yes, 0=No): ");
        scanf("%d", &documentsComplete[i]);
    }
    printf("\n-----------------------------\n");
    printf("Snupplier: %s\n", supplierName);
    printf("Supplier Price: %.2f\n", price);
    
    if (registered == 1 && documentsComplete == 1 && price <= budget)
    {
        printf("Qualified\n");
        //determine the preferred supplier by lowest price
        
    }
    else
    {
        printf("Disqualified\n");
    }
    return 0;
}