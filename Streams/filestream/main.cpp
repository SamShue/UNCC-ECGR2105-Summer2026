#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){
    ofstream outFile;
    outFile.open("Example.txt");

    outFile << "Goodbye World!" << endl;
    outFile << "It's been real." << endl;
    outFile << "I wish I could have been tenured." << endl;

    outFile.close();

    ifstream inFile;

    inFile.open("mycsv.csv");

    if(!inFile.is_open()){
        cout << "Unable to open file" << endl;
        return 0;
    }

    int input;
    char comma;
    vector<int> csvVals;
    while(!inFile.eof()){
        inFile >> input;
        inFile >> comma;
        csvVals.push_back(input);
    }

    for(int val : csvVals){
        cout << val << endl;
    }

    return 0;
}