#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>

using namespace std;

class Student {
    public:
    Student(string n, vector<double> v);
    void addNewScore(double score);
    double computeGpa() const;
    void setName(string n);
    string getName() const;
    int getId() const;
    void setScores(vector<double> v);
    vector<double> getScores() const;

    private:
    string name;
    int id;
    vector<double> scores;
    static int nextId;
};

#endif