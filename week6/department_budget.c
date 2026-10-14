#include <stdio.h>
int mainc(){
    //delaring variables
    float budgets[10];
    float total=0;
    float average, highest, lowest;


    //1.capture 10 budgets
    for(int i=0; i<10; i++){
        printf("Enter budget no.%d\n", i+1);
        scanf("%f", &budgets[i]);

        printf("Budgets: %.2f", budgets);

         total = total + budgets[i];
    }

    //3.calculate the average
    average = total / 10;

    for(int i=0; i<10; i++){
        printf("Department no.&d: %.2f", budgets[i], i+1);
    }
    
    return 0;
}