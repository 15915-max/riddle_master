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

    bool checkAnswer(string userAnswer) const;
    string getQuestion() const;
    int getAttempts() const;
    void reduceAttempts();
};