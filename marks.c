#include <stdio.h>

int main() {
    float unitsConsumed, ratePerUnit, fixedCharges, taxesFees, totalBill;

    printf("Enter the number of units consumed (kWh): ");
    scanf("%f", &unitsConsumed);

    printf("Enter the rate per unit (USD/kWh): ");
    scanf("%f", &ratePerUnit);

    printf("Enter fixed charges (USD): ");
    scanf("%f", &fixedCharges);

    printf("Enter taxes/fees (USD): ");
    scanf("%f", &taxesFees);

    totalBill = (unitsConsumed * ratePerUnit) + fixedCharges + taxesFees;

    
    printf("\nTotal Electricity Bill: $%.2f\n", totalBill);

    return 0;
}
