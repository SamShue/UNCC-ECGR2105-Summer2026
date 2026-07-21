#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

class Person {
    public:
    Person(string name){
        this->name = name;
        this->id = nextId++;
    }

    string getName() const {
        return name;
    }

    int getId() const {
        return id;
    }

    virtual string toString() const = 0;

    protected:
    string name;
    int id;

    private:
    static int nextId;
};

int Person::nextId = 800000000;

class Student : public Person {
    public:
    Student(string name, vector<double> scores) : Person(name) {
        for(double score : scores){
            if(score >= 0.0 && score <= 4.0){
                this->scores.push_back(score);
            }
        }
    }

    void addNewScore(double score){
        if(score >= 0.0 && score <= 4.0){
            scores.push_back(score);
        } else {
            cout << "Invalid score - not added to scores vector." << endl;
        }
    }

    double computeGpa() const {
        double avg = 0;
        for(double score : scores){
            avg += score;
        }
        avg /= (double)scores.size();
        return avg;
    }

    string toString() const {
        stringstream ss;
        ss << "Name: " << name << ", ID: " << id << ", GPA: " << computeGpa();
        return ss.str();
    }

    private:
    vector<int> scores;
};

class Faculty : public Person {
    public:
    Faculty(string name, double salary, vector<string> courses) : Person(name) {
        for(string course : courses){
            this->courses.push_back(course);
        }

        this->salary = salary;
    }

    void addNewCourse(string course){
        courses.push_back(course);
    }

    string toString() const {
        stringstream ss;
        ss << "Name: " << name << ", ID: " << id << ", Salary: " << salary;

        ss << ", Courses: ";
        for(int i = 0; i < courses.size(); i++){
            ss << courses.at(i);

            if(i < courses.size() - 1){
                ss << ", ";
            }
        }

        return ss.str();
    }

    private:
    vector<string> courses;
    double salary;
};

int main(){
    Student s1("Bob", {4.0, 4.0, 3.0, 4.0});
    Student s2("Joe", {3.0, 2.0, 3.0, 2.0});
    Faculty f1("Sam", 84000, {"C++", "Embedded Systems", "Robotics"});
    Faculty f2("Jim", 150000, {"Advanced Embedded Systems", "Embedded Systems", "Robotics"});

    Person p("Bob2");

    vector<Person*> database;
    database.push_back(&s1);
    database.push_back(&s2);
    database.push_back(&f1);
    database.push_back(&f2);

    for(int i = 0; i < database.size(); i++)
        cout << database.at(i)->toString() << endl;

    return 0;
}