#pragma once
#include "riddle.h"
using namespace std;

class TextRiddle : public Riddle {
public:
    TextRiddle(string q, string a) : Riddle(q, a) {}
};
