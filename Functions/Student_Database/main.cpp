#include <iostream>
#include <vector>
#include "utils.h"

using namespace std;

int main(){
    vector<string> names = {"Bob", "Joe", "Sam"};
    vector<int> id = {801123456, 801321321, 801456456};
    vector<vector<string>> courses = {{"Calc I", "Physics", "Circuits I"}, {"Calc I, Calc II, Chemistry I"}, {"Calc I", "C++ Programming"}};
    vector<vector<double>> scores = {{3.0, 3.0, 4.0}, {4.0, 3.0, 4.0}, {2.0, 3.0}};

    int selection;

    do{
        cout << "Select a student to view their information:" << endl;
        for(int i = 0; i < names.size(); i++){
            cout << i << ": " << names.at(i) << endl;
        }
        cout << "Enter " << names.size() << " to exit." << endl;

        cin >> selection;

        // check for loop exit condition
        if(selection >= names.size())
            break;

        cout << "Student Info: " << endl;
        cout << "Name: " << names.at(selection) << endl;
        cout << "ID: " << id.at(selection) << endl;
        double gpa = average(scores.at(selection));
        cout << "GPA: " << gpa << endl;

    } while(true);

    return 0;
}