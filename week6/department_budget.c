#include <stdio.h>
int main(){
    //delaring variables
    float budgets[10];
    float total=0;
    float average, highest, lowest, temp;
    int i,j;



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
        printf("Department no.&d: %.2f", i+1, budgets[i]);
    }
    
    printf("Total Budget: %.2f\n", total);
    printf("Average Budget: %.2f\n", average);

    for (int i=0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (budgets[j] > budgets[j+1]) {
                temp = budgets[j];
                budgets[j] = budgets[j+1];
                budgets[j+1] = temp;
            }
            
            
        }
        
        
    }
    printf("\n-----Budgets from the lowest to the highest-----\n");
    for (i=0; i < 10; i++) {
        printf("%.2f\n", budgets[i]);
    }
    
    return 0;
}