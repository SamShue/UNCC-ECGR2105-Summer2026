#include "student.h"

int Student::nextId = 800000000;

Student::Student(string n, vector<double> v){
    cout << "Constructor called!!" << endl;
    name = n;
    id = nextId++;
    for(double score : v){
        if(score >= 0.0 && score <= 4.0){
            scores.push_back(score);
        }
    }
}

void Student::addNewScore(double score){
    if(score >= 0.0 && score <= 4.0){
        scores.push_back(score);
    } else {
        cout << "Invalid score - not added to scores vector." << endl;
    }
}

double Student::computeGpa() const {
    double avg = 0;
    for(double score : scores){
        avg += score;
    }
    avg /= (double)scores.size();
    return avg;
}

void Student::setName(string n){
    name = n;
}

string Student::getName() const {
    return name;
}

int Student::getId() const {
    return id;
}

void Student::setScores(vector<double> v){
    for(double score : v){
        if(score >= 0.0 && score <= 4.0){
            scores.push_back(score);
        }
    }
}

vector<double> Student::getScores() const {
    return scores;
}