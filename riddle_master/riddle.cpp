#include "riddle.h"
using namespace std;

Riddle::Riddle(string q, string a) {
    question = q;
    answer = a;
    attempts = 3;
}

bool Riddle::checkAnswer(string userAnswer) const {
    return userAnswer == answer;
}

string Riddle::getQuestion() const {
    return question;
}

int Riddle::getAttempts() const {
    return attempts;
}

void Riddle::reduceAttempts() {
    if (attempts > 0) {
        attempts--;
    }
}