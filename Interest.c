#include <stdio.h>
#include <stdlib.h>

//Function prototype
double calculateTheInterest(double Principle, double Rate, double Time);
double calculateTotalAmountPayable(double Principle, double Rate, double Time);

int main(){

    double Principle, Rate, Time, Interest, totalAmountPayable;

    printf("Enter the principle amount: ");
    scanf("%lf", &Principle);

    printf("Enter the interest rate on the loan: ");
    scanf("%lf", &Rate);
    Rate /= 100; // Convert percentage to decimal

    printf("Enter the time on the loan: ");
    scanf("%lf", &Time);

    Interest = calculateTheInterest(Principle, Rate, Time); // Calculating interest
    totalAmountPayable = calculateTotalAmountPayable(Principle, Rate, Time); // Calculating total amount payable

    printf("The principle amount is $%.2lf \n", Principle);

    printf("The interest rate on the loan is %.2lf%% \n", Rate); // Display rate as percentage

    printf("The time on the loan is %.2lf years \n", Time);

    printf("The interest on a loan acquired is $%.2lf \n", Interest);

    printf("The total amount payable is $%.2lf\n", totalAmountPayable);

    return 0;
}

double calculateTheInterest(double Principle, double Rate, double Time){
    return Principle * Rate * Time;
}
double calculateTotalAmountPayable(double Principle, double Rate, double Time){
    return Principle *(1 + Rate * Time);
}