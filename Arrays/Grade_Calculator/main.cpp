#include <iostream>

using namespace std;

int main(){
    double quiz[] = {85.0, 93.5, 71.0, 100.0, 91.0, 95.0};
    const unsigned int NUM_QUIZZES = sizeof(quiz)/sizeof(double);

    double sum = 0;
    unsigned int i = 0;
    while(i < NUM_QUIZZES){
        sum = sum + quiz[i];
        i = i + 1;
    }
    double avg = sum / (double)NUM_QUIZZES;

    cout << "Your quiz average is: " << avg << endl;

    return 0;
}