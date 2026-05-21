#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// Simulation to roll 2 6-sided dice
int main(){
    srand(time(0));

    // unsigned integers cannot hold negative values - rand() produces unsigned ints
    unsigned int r1 = rand() % 6 + 1;

    cout << "First die roll is: " << r1 << endl;

    unsigned int r2 = rand() % 6 + 1;

    cout << "Second die roll is: " << r2 << endl;

    cout << "Total dice roll is: " << r1 + r2 << endl;

    return 0;
}