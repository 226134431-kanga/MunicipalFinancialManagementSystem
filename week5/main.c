#include <stdio.h>
int main() {
    //delaring variables
    double Salaries[50];
    double total=0;
    double average, highest, lowest;
    double search;
    int found=0;


    //1.capture 50 salaries
    for(int i=0; i<50; i++){
        printf("Enter the salary for employee no.%d\n", i+1);
        scanf("%lf", &Salaries[i]);

         total = total + Salaries[i];
    }

    //3.calculate the average
    average = total / 50;

    //4.find the highest & lowest salary
    highest = Salaries[0];
    lowest = Salaries[0];
    
    for(int i=1; i<50; i++){
    
        if (Salaries[i] > highest){
        highest = Salaries[i];
        }
        if (Salaries[i] < lowest){
        lowest = Salaries[i];
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
        
        if(Salaries[i]==search){
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