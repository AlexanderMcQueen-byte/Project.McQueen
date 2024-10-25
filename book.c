#include <stdio.h>
#include <string.h>

struct book {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
};

int main() {
    struct book myBook;

    // Part (ii): Initialize the structure using string literals and strcpy
    strcpy(myBook.title, "Introduction to C Programming");
    strcpy(myBook.author, "John Smith");
    myBook.publication_year = 2022;
    strcpy(myBook.ISBN, "9780131103627");
    myBook.price = 49.99;

    // Part (iii): Print the values
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: %.2f\n", myBook.price);

    return 0;
}