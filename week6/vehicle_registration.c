#include <stdio.h>
#include <string.h>

int main() {
    char registrations[20][20];
    char search[20];
    int i, found = 0;

    printf("\n----VEHICLE REGISTRATION SYSTEM----\n");

    for (i = 0; i < 20; i++) {
        printf("Enter registration number %d: ", i + 1);
        scanf("%19s", registrations[i]);
    }

    printf("\n----Vehicle Registration Numbers----\n");

    for (i = 0; i < 20; i++) {
        printf("%d. %s\n", i + 1, registrations[i]);
    }

    printf("\nEnter registration number for searching: ");
    scanf("%19s", search);

    for (i = 0; i < 20; i++) {
        if (strcmp(registrations[i], search) == 0) {
            found = 1;
            printf("Registration number found at %d.\n", i + 1);
            break;
        }
    }

    if (found == 0) {
        printf("Registration not found.\n");
    }

    return 0;
}
