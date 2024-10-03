#include <stdio.h>

int main() {
    int age;
    float annual_income;

    printf("Enter your age in years: ");
    scanf("%d", &age);

    printf("Enter your annual income (in Kenya shillings): ");
    scanf("%f", &annual_income);

    if (age >= 21 && annual_income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this moment.\n");
    }

    return 0;
}