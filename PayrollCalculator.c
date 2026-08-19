#include <stdio.h>
 
                            //BRAXTEN ORLINE URDELAS :>
int main()
{
    float hourlyRate, hoursWorked;            // This is going to be the inputs   :>
    float regularHours, overtimeHours;              // This is going to be the calculations/Outputs :>
    float regularPay, overtimePay, grossPay;
    float tax, netPay;
    printf("===========================================================================\n");
    printf("=                       Flexplay Inc.                                     =\n");
    printf("===========================================================================\n");

    printf("\nWelcome to the Weekly Payroll Calculator!\n");
    
    printf("Enter hourly rate: $");
    scanf("%f", &hourlyRate);
 
    printf("Enter hours worked this week: ");
    scanf("%f", &hoursWorked);
 
                        // Split hours into regular and overtime 
    if (hoursWorked > 40)
    {
        regularHours = 40;
        overtimeHours = hoursWorked - 40;
    }
    else
    {
        regularHours = hoursWorked;
        overtimeHours = 0;
    }                                                // Calculate pay
    regularPay = regularHours * hourlyRate;
    overtimePay = overtimeHours * hourlyRate * 1.5;
    grossPay = regularPay + overtimePay;
                                            //Calculate tax based on gross pay 
    if (grossPay < 600)
    {
        tax = grossPay * 0;
    }
    else if (grossPay <= 1200)
    {
        tax = grossPay * 0.12;
    }
    else
    {
        tax = grossPay * 0.22;
    }
    netPay = grossPay - tax;
    printf("\n------------ Weekly Pay Stub ------------\n");
    printf("-Regular Pay: $%.2f\n", regularPay);
    printf("-Overtime Pay: $%.2f\n", overtimePay);
    printf("-Gross Pay: $%.2f\n", grossPay);
    printf("-Tax: $%.2f\n", tax);
    printf("============================================================================\n");
    printf("                     -Net Pay: $%.2f\n", netPay);
    
    printf("\n Thank you for using the Flexplay Inc. Weekly Payroll Calculator! Goodbye!\n");
    printf("============================================================================\n");

    return 0;
}