#include <stdio.h>

/*
    TODO:
        Write a program to determine if a customer has exceeded the credit charge for the account.
        The following facts are available 
            * Account number
            * Balance at the beginning of the month 
            * Total of all items charged this month 
            * Total of all credit applied this month 
            * Allowed credit limit
        The program should input each fact and calculate the new balance ( beginning balance + charges - credits)
        if the balance exceeds the credit limit the program should return the balance and print "Credit limit exceeded"
*/

int main(void) {
    int accNumber;
    float startBalance, charges, credit, limit, endBalance;

    do {
    printf("%s", "Enter the account number (-1 to end): ");
    scanf("%d", &accNumber);
    if( accNumber == -1 ){
        break;
    }
    printf("%s", "Enter beginning balance: ");
    scanf("%f", &startBalance);

    printf("%s","Enter total charges: ");
    scanf("%f", &charges);

    printf("%s", "Enter total credit: ");
    scanf("%f", &credit);

    printf("%s", "Enter credit limit: ");
    scanf("%f", &limit);

    endBalance = startBalance + charges - credit;
    if(endBalance > limit) {
        printf("%-14s%d\n", "Account:", accNumber);
        printf("%-14s%0.2f\n", "Credit limit:", limit);
        printf("%-14s%0.2f\n", "Balance:", endBalance);
        printf("%s\n", "Credit Limit exceeded.");
    }

    }while (accNumber != -1);
}