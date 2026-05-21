#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// simulate a magic 8 ball
int main(){
    
    string question;
    cout << "Please ask a question." << endl;
    getline(cin, question);

    // Return here to use question to seed the random number generator
    srand(time(0));

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