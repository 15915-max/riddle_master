#pragma once
#include <string>
using namespace std;

class Riddle {

private:
    string question;
    string answer;
    int attempts;

public:
    Riddle(string q, string a);

    virtual bool checkAnswer(string userAnswer) const; 

    string getQuestion() const;
    string getAnswer() const; 
    int getAttempts() const;

    void reduceAttempts();

    virtual ~Riddle() {}
};
