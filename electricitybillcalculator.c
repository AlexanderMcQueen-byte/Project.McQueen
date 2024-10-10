#include <stdio.h>

int main() {
    int CustomerID, unitsConsumed;
    char CustomerName[100];
    float ChargesPerUnit, TotalBill, Surcharge, Total_Amount_To_Be_Paid;

    printf("Enter customer ID: ");
    scanf("%d", &CustomerID);

    printf("Enter units consumed: ");
    scanf("%d", &unitsConsumed);

    printf("Enter customer name: ");
    scanf("%s", CustomerName); 

    // Calculate charges per unit based on Units Consumed
    if (unitsConsumed > 0 && unitsConsumed <= 199) {
        ChargesPerUnit = 1.20;
    } else if (unitsConsumed > 199 && unitsConsumed <= 400) {
        ChargesPerUnit = 1.50;
    } else if (unitsConsumed > 400 && unitsConsumed <= 600) {
        ChargesPerUnit = 1.80;
    } else if (unitsConsumed > 599) {
        ChargesPerUnit = 2.00;
    }

    // Calculate total bill
    TotalBill = unitsConsumed * ChargesPerUnit;

    // Apply surcharge if bill exceeds Kshs. 400
    if (TotalBill > 400) {
        Surcharge = TotalBill * 0.15;
        TotalBill += Surcharge;
    }

    // Ensure minimum bill is Kshs. 100/=
    if (TotalBill < 100) {
        TotalBill = 100;
    }

    // Calculate total amount to pay
    Total_Amount_To_Be_Paid = TotalBill;

    // Display the output
    printf("\nCustomer ID: %d\n", CustomerID);
    printf("Customer Name: %s\n", CustomerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charges per Unit: %.2f Ksh\n", ChargesPerUnit);
    printf("Total Amount to Be Paid: %.2f Ksh\n", Total_Amount_To_Be_Paid);

    return 0;
}
