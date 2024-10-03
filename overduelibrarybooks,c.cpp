#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue, fineRate, fineAmount;

    // Get user input for book ID, due date, and return date
    printf("Enter the book ID: ");
    scanf("%d", &bookID);

    printf("Enter the due date (day): ");
    scanf("%d", &dueDate);

    printf("Enter the return date (day): ");
    scanf("%d", &returnDate);

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine fine rate based on days overdue
    if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
    } else {
        fineRate = 100;
    }

    // Calculate fine amount
    fineAmount = daysOverdue * fineRate;

    // Display results
    printf("\nBook ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh. %d per day\n", fineRate);
    printf("Fine Amount: Ksh. %d\n", fineAmount);

    return 0;
}
