#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<double> quizzes;

    cout << "Enter in quiz grades. (Enter a negative number to quit)" << endl;
    double input;
    do {
        cin >> input;
        if(input >= 0.0)
            quizzes.push_back(input);
    } while(input >= 0.0);

    double avg = 0.0;
    for(double grade : quizzes){
        avg += grade;
    }
    avg = avg / (double)quizzes.size();

    // print vector to demonstrate .at() function
    cout << "Recorded grades are: " << endl;
    for(int i = 0; i < quizzes.size(); i++){
        cout << quizzes.at(i) << endl;
    }

    /*
    double quiz[] = {85.0, 93.5, 71.0, 100.0, 91.0, 95.0};
    const unsigned int NUM_QUIZZES = sizeof(quiz)/sizeof(double);

    double sum = 0;
    // range-based for loop
    for(double val : quiz){
        cout << val << endl;
        sum += val;
    }
    double avg = sum / (double)NUM_QUIZZES;
    */

    /*
    double sum = 0;
    for(int i = 0; i < NUM_QUIZZES; i++){
        sum += quiz[i];
    }
    double avg = sum / (double)NUM_QUIZZES;
    */

    /*
    double sum = 0;
    unsigned int i = 0;
    while(i < NUM_QUIZZES)
        sum += quiz[i++];
    double avg = sum / (double)NUM_QUIZZES;
    */

    /* 
    double sum = 0;
    unsigned int i = 0;
    while(i < NUM_QUIZZES){
        sum += quiz[i]; // sum = sum + quiz[i];
        i++; // i = i + 1;
    }
    double avg = sum / (double)NUM_QUIZZES;
    */

    cout << "Your quiz average is: " << avg << endl;
    
    return 0;
}