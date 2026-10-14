#include <stdio.h>
int main() {
    //delaring variables
    float salaries[50];
    float total=0;
    float average, highest, lowest;
    float search;
    int found=0;


    //1.capture 50 salaries
    for(int i=0; i<50; i++){
        printf("Enter the salary for employee no.%d\n", i+1);
        scanf("%f", &salaries[i]);

         total = total + salaries[i];
    }

    //3.calculate the average
    average = total / 50;

    //4.find the highest & lowest salary
    highest = salaries[0];
    lowest = salaries[0];
    
    for(int i=1; i<50; i++){
    
        if (salaries[i] > highest){
        highest = salaries[i];
        }
        if salaries[i] < lowest){
        lowest = salaries[i];
        }
    }

    printf("---SALARY REPORT---\n");
    printf("Total Salary %.2f\n", total);
    printf("Average Salary %.2f\n", average);
    printf("Highest Salary %.2f\n", highest);
    printf("Lowest Salary %.2f\n", lowest);

    //search for a particular salary
    printf("Enter search: \n");
    scanf("%lf", &search);

    for(int i=0; i<50; i++){
        
        if(salaries[i]==search){
            printf("Salary at %d", i+1);
            found=1;
            break;
        }
    }

    if (found==0){
        printf("Salary was not found\n");
    }


    return 0;
}