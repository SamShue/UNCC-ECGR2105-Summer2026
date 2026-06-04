#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// simulate a magic 8 ball
int main(){
    const int SIZE = 3;
    int arr[] = {1, 2, 3};

    float f = 0.5;
    double d = 0.5;

    int sum = 0;
    for(int i = 0; i < SIZE; i++){
        sum += arr[i];
    }

    string question;
    cout << "Please ask a question." << endl;
    getline(cin, question);

    unsigned int sum = 0;
    for(int i = 0; i < question.size(); i++){
        char temp = question[i];
        if(isupper(temp)){
            temp = tolower(temp);
        }
        sum += (unsigned int)temp;
    }

    // Return here to use question to seed the random number generator
    srand(sum);

    unsigned int r = rand() % 3;

    if(r == 0){
        cout << "Yes" << endl;
    } else if(r == 1){
        cout << "No" << endl;
    } else {
        cout << "Maybe" << endl;
    }
    
    /*
    switch(r){
        case 0:
            cout << "Yes" << endl;
            break;
        case 1:
            cout << "No" << endl;
            break;
        default:
            cout << "Maybe" << endl;
    }
    */
    return 0;
}