#include <iostream>

using namespace std;

//#define PRICE_PER_SQUARE_FOOT 175

int main(){
    const int PRICE_PER_SQUARE_FOOT = 175;
    int totalSquareFootage;

    cout << "Enter the total square footage of the house: ";
    cin >> totalSquareFootage;

    int totalPrice = PRICE_PER_SQUARE_FOOT * totalSquareFootage;

    cout << "The total price of the house is: $" << totalPrice << endl;

    cout << "What would you like to put as a down payment (percentage)? ";
    int percentageDownPayment;
    cin >> percentageDownPayment;

    double percentage = (double)percentageDownPayment / 100.0;
    double downPayment = totalPrice * percentage;

    cout << "The down payment for " << percentageDownPayment << "% would be " << downPayment << "." << endl;

    return 0;
}