#include <iostream>
#include <vector>
#include "student.h"

using namespace std;

int main(){
    vector<Student> students;

    //Student s1("Bob", 801123123, {3.0, 3.0, 4.0, 8.0});
    //students.push_back(s1);

    students.push_back(Student("Bob", {3.0, 3.0, 4.0, 8.0}));

    //Student s2("Joe", 801123124, {4.0, 4.0, 4.0});
    //students.push_back(s2);

    students.push_back(Student("Joe", {4.0, 4.0, 4.0}));

    for(Student s : students){
        cout << "Name: " << s.getName() << endl;
        cout << "ID: " << s.getId() << endl;
        cout << "Scores:";
        for(double score : s.getScores()){
            cout << " " <<  score;
        }
        cout << endl;
        cout << "GPA: " << s.computeGpa() << endl;
    }


    /*
    Student s1("Bob", 801123123, {3.0, 3.0, 4.0, 8.0});
    //s1.setName("Bob");
    //s1.setId(801123123);
    //s1.setScores({3.0, 3.0, 4.0, 8.0});

    s1.addNewScore(-3.0);
    s1.addNewScore(6.0);

    Student s2("Joe", 801123124, {4.0, 4.0, 4.0});
    //s2.setName("Joe");
    //s2.setId(801123124);
    //s2.setScores({4.0, 4.0, 4.0});

    cout << "Name: " << s1.getName() << endl;
    cout << "ID: " << s1.getId() << endl;
    cout << "Scores:";
    for(double score : s1.getScores()){
        cout << " " <<  score;
    }
    cout << endl;
    cout << "GPA: " << s1.computeGpa() << endl;

    cout << "Name: " << s2.getName() << endl;
    cout << "ID: " << s2.getId() << endl;
    cout << "Scores:";
    for(double score : s2.getScores()){
        cout << " " <<  score;
    }
    cout << endl;
    cout << "GPA: " << s2.computeGpa() << endl;
    */

    /*
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
    */
    return 0;
}