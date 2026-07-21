#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>

using namespace std;

class Question {
    public:
    Question(string questionText, double points){
        this->questionText = questionText;
        this->points = points;
        correct = false;
    }

    double getPoints() const {
        return points;
    }

    double getPointsScored() const {
        return points * (double)correct;
    }

    virtual void askQuestion() = 0;

    protected:
    string questionText;
    double points;
    bool correct;
};

class MultipleChoiceQuestion : public Question {
    public:
    MultipleChoiceQuestion(string questionText, char correctAnswer, double points) : Question(questionText, points){
        this->correctAnswer = correctAnswer;
    }

    void askQuestion(){
        cout << questionText << endl;
        char userInput;
        cin >> userInput;
        if(userInput == correctAnswer){
            correct = true;
        }
    }

    private:
    char correctAnswer;
};

class MathQuestion : public Question {
    public:
    MathQuestion(string questionText, double correctAnswer, double points) : Question(questionText, points){
        this->correctAnswer = correctAnswer;
    }

    void askQuestion(){
        cout << questionText << endl;
        double userInput;
        cin >> userInput;
        if(abs(correctAnswer - userInput) < 0.01){
            correct = true;
        }
    }

    private:
    double correctAnswer;
};

int main(){
    vector<Question*> quiz;

    quiz.push_back(new MathQuestion("What is 2 + 2?", 4.0, 10.0));
    quiz.push_back(new MultipleChoiceQuestion("What color is the reflecting pool? A. Blue, B. Green, C. Yellow", 'B', 10.0));
    quiz.push_back(new MultipleChoiceQuestion("What is your favorite programming language? A. Python, B. Rust, C. C++", 'C', 10.0));

    double totalPoints = 0.0;
    double scoredPoints = 0.0;
    for(Question* question : quiz){
        question->askQuestion();
        totalPoints += question->getPoints();
        scoredPoints += question->getPointsScored();
    }

    cout << "You scored: " << (scoredPoints / totalPoints) * 100 << "%" << endl;

    return 0;
}