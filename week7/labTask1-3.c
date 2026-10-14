#include <stdio.h>
#include <string.h>
int main(){

    char supplierName [2][100];
    char supplierEmail [100];
    char supplierNumber [50];
    char supplierTown [50];


    printf("Enter the supplier name: \n");
    fgets(supplierName, sizeof(supplierName), stdin);

    printf("Enter the supplier email: \n");
    fgets(supplierEmail, sizeof(supplierEmail), stdin);

    printf("Enter the supplier number: \n");
    fgets(supplierNumber, sizeof(supplierNumber), stdin);

    printf("Enter the supplier town: \n");
    fgets(supplierTown, sizeof(supplierTown), stdin);

    printf("---SUPPLIER DETAILS---\n");
    printf("Name: %s", supplierName);
    printf("Eamil: %s", supplierEmail);
    printf("Number: %s", supplierNumber);
    printf("Town: %s", supplierTown);
    
    printf("Supplier name length: %zu\n", strlen(supplierName));
    printf("Supplier email length: %zu\n", strlen(supplierEmail));
    printf("Supplier town length: %zu\n", strlen(supplierTown));

    return 0;
}
