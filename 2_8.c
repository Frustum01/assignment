#include <stdio.h>

int main() {
    int customerID;
    char customerName[50];
    float unitsConsumed, billAmount, surcharge;
    printf("Enter customer ID: ");
    scanf("%d", &customerID);
    printf("Enter customer name: ");
    scanf("%s", customerName);
    printf("Enter units consumed: ");
    scanf("%f", &unitsConsumed);
    if (unitsConsumed <= 199) {
        billAmount = unitsConsumed * 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        billAmount = unitsConsumed * 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        billAmount = unitsConsumed * 1.80;
    } else {
        billAmount = unitsConsumed * 2.00;
    }
    if (billAmount > 400) {
        surcharge = billAmount * 0.15;
        billAmount += surcharge;
    }
    if (billAmount < 100) {
        billAmount = 100;
    }
    printf("\nElectricity Bill Details\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %.2f\n", unitsConsumed);
    printf("Total Bill Amount: Rs. %.2f\n", billAmount);

    return 0;
}


