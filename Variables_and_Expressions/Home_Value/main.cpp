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

    return 0;
}