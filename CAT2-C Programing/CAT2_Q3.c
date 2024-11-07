#include <stdio.h>

int main() {
    float hoursWorked, hourlyWage, grossPay, taxes, netPay;

    // Get input from the user
    printf("Enter the hours worked in a week: ");
    scanf("%f", &hoursWorked);

    printf("Enter the hourly wage: ");
    scanf("%f", &hourlyWage);

    // Calculate gross pay
    if (hoursWorked <= 40) {
        grossPay = hoursWorked * hourlyWage;
    } else {
        grossPay = (40 * hourlyWage) + (hoursWorked - 40) * hourlyWage * 1.5;
    }

    // Calculate taxes
    if (grossPay <= 600) {
        taxes = grossPay * 0.15;
    } else {
        taxes = 600 * 0.15 + (grossPay - 600) * 0.20;
    }

    // Calculate net pay
    netPay = grossPay - taxes;

    // Print the results
    printf("Gross pay: %.2f\n", grossPay);
    printf("Taxes: %.2f\n", taxes);
    printf("Net pay: %.2f\n", netPay);

    return 0;
}
