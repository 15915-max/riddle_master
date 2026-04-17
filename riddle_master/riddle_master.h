#pragma once
#include <string>
using namespace std;


class RiddleMaster{
public: 
	RiddleMaster();            // constructor
	void showMenu();
	void showInstructions();
	void playGame();
	void showResult();

private:
	int score;

};

