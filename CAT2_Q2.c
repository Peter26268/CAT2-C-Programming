//C_programing
/*
Name: MBUGUA PETER WAWERU 
Reg no : CT100/26268/25
DESCRIPTION : Hour's worked in a week 
*/

#include <stdio.h>

int main() {
    float hours_worked, hourly_wage;
    float gross_pay, taxes, net_pay;
    
    // Get user input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours_worked);
    printf("Enter hourly wage: $");
    scanf("%f", &hourly_wage);
    
    // Calculate gross pay
    if (hours_worked <= 40) {
        gross_pay = hours_worked * hourly_wage;
    } else {
        // Regular pay for first 40 hours + overtime pay (time and a half)
        float regular_pay = 40 * hourly_wage;
        float overtime_pay = (hours_worked - 40) * hourly_wage * 1.5;
        gross_pay = regular_pay + overtime_pay;
    }
    
    // Calculate taxes
    if (gross_pay <= 600) {
        taxes = gross_pay * 0.15;
    } else {
        // 15% on first $600 + 20% on the remaining amount
        taxes = (600 * 0.15) + ((gross_pay - 600) * 0.20);
    }
    
    // Calculate net pay
    net_pay = gross_pay - taxes;
    
    // Display results
    printf("\n--- Payroll Summary ---\n");
    printf("Hours worked: %.2f\n", hours_worked);
    printf("Hourly wage: $%.2f\n", hourly_wage);
    printf("Gross pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net pay: $%.2f\n", net_pay);
    
    return 0;
}