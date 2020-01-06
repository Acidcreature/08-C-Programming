//Calculate mileage reimbursement

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main( int argc, char **argv)
{
    double startMileage, endingMileage, ratePerMile;

    printf("Enter the starting mileage: ");
    scanf("%lf", &startMileage);

    printf("Enter the ending mileage: ");
    scanf("%lf", &endingMileage);

    printf("Enter the rate per mile: ");
    scanf("%lf", &ratePerMile);

    double totalMiles = endingMileage - startMileage;
    double reimbursement = totalMiles * ratePerMile;
    reimbursement = round(reimbursement * 100) / 100;

    printf("You drove %f miles, at %f per mile, you are owed $%.2f\n", totalMiles,
    ratePerMile, reimbursement);

    return 0;
}