#include <iostream>
#include <string>
#include <limits>
#include "riddle_master.h"
#include "text_riddle.h"

using namespace std;


RiddleMaster::RiddleMaster() {
    score = 0;
}

void RiddleMaster::showMenu() {
    int number;


    do {
        cout << "\n\n===== WELCOME TO RIDDLE MASTER =====\n\n";
        cout << "_________________________________\n";
        cout << "/ \\                             \\\\\n";
        cout << "|  |                            |\n";
        cout << "\\_ |                            |\n";
        cout << "   |                            |\n";
        cout << "   |                            |\n";
        cout << "   |                            |\n";
        cout << "   |                            |\n";
        cout << "   |        Riddle Master       |\n";
        cout << "   |                            |\n";
        cout << "   |                            |\n";
        cout << "   |                            |\n";
        cout << "   |                            |\n";
        cout << "   |                            |\n";
        cout << "   |                            |\n";
        cout << "   |   _________________________|___\n";
        cout << "   |  /                            /\n";
        cout << "   \\_/____________________________/\n";

        cout << "\n\n=============== MENU ================\n";
        cout << "1. Play Game\n";
        cout << "2. Instructions\n";
        cout << "3. Exit\n";
        cout << "=====================================\n";

        cout << "\nEnter your number: ";
        cin >> number;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
 

        if (number == 1) {
            cout << "\nStarting game...\n";
            score = 0;
            playGame();
          
         
        }
        else if (number == 2) {
            showInstructions();
        }
        else if (number == 3) {
            cout << "\nExiting game...\n";
            break;
        }
        else {
            cout << "\nInvalid choice!\n";
        }

    } while (number != 3);
}

void RiddleMaster::showInstructions() {
    int number;

    cout << "\n\n================================== Instructions ============================================\n";
    cout << "There are 3 riddles and you get 3 attempts for each riddle.\n";
    cout << "Think well and type your answer, then press enter.\n";
    cout << "The answer is case sensitive.\n";
    cout << "Correct answers give you points and wrong answers reduce points.\n";
    cout << "If you complete all the riddles correctly, you become a Riddle Master.\n";
    cout << "===========================================================================================\n";

    cout << "\n0. Return to Menu\n";
    cout << "1. Start Game\n";
    cout << "3. Exit\n";

    cout << "\nEnter your number: ";
    cin >> number;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');


    if (number == 1) {
        cout << "\nStarting game...\n";
        score = 0;
        playGame();
   
    }
    else if (number == 0) {
        cout << "\nReturning to menu...\n";
    }
    else if (number == 3) {
        cout << "\nExiting game...\n";
        exit(0);
    }
    else {
        cout << "\nInvalid choice!\n";
    }
}
void RiddleMaster::playGame() {
    string answer;
    bool solved;

    // 1st riddle with inheritance
    TextRiddle r1("What gets smaller every time it takes a bath?", "Soap");

    solved = false;

    cout << "\n\n=================================== 1st Riddle ===================================\n\n";
    cout << r1.getQuestion() << "\n";

    for (int i = 0; i < 3; i++) {
        cout << "Answer " << i + 1 << " is: ";
        getline(cin, answer);

        if (r1.checkAnswer(answer)) {
            cout << "Yay! Correct answer!\n";
            score += 20;
            solved = true;
            break;
        }
        else {
            cout << "Wrong answer :(\nTry again...\n";
            score -= 5;
        }
    }

    if (!solved) {
        cout << "The correct answer was: " << r1.getAnswer() << "\n";
    }

    // 2nd riddle with inheritance
    TextRiddle r2("What word contains 26 letters but only has three syllables?", "Alphabet");

    solved = false;

    cout << "\n\n=================================== 2nd Riddle ===================================\n\n";
    cout << r2.getQuestion() << "\n";

    for (int i = 0; i < 3; i++) {
        cout << "Answer " << i + 1 << " is: ";
        getline(cin, answer);

        if (r2.checkAnswer(answer)) {
            cout << "Yay! Correct answer!\n";
            score += 20;
            solved = true;
            break;
        }
        else {
            cout << "Wrong answer :(\nTry again...\n";
            score -= 5;
        }
    }

    if (!solved) {
        cout << "The correct answer was: " << r2.getAnswer() << "\n";
    }

    // 3rd riddle with inheritance
    TextRiddle r3("What is always in front of you, but can't be seen?", "Future");

    solved = false;

    cout << "\n\n=================================== 3rd Riddle ===================================\n\n";
    cout << r3.getQuestion() << "\n";

    for (int i = 0; i < 3; i++) {
        cout << "Answer " << i + 1 << " is: ";
        getline(cin, answer);

        if (r3.checkAnswer(answer)) {
            cout << "Yay! Correct answer!\n";
            score += 20;
            solved = true;
            break;
        }
        else {
            cout << "Wrong answer :(\nTry again...\n";
            score -= 5;
        }
    }

    if (!solved) {
        cout << "The correct answer was: " << r3.getAnswer() << "\n";
    }

    cout << "\nYou finished all the riddles!\nNow showing result...\n";
    showResult();
}

    


void RiddleMaster::showResult() {
    cout << "\n\n================================== GAME RESULT ============================================\n";
    cout << "Your points are: " << score << "\n";

    if (score == 60) {
        cout << "Congrats! You are a Riddle Master!\n";
    }
    else if (score >= 40) {
        cout << "Good job! Almost a Riddle Master..\n";
    }
    else if (score >= 20) {
        cout << "This is decent work.\n";
    }
    else {
        cout << "Better luck next time!\n";
    }

    cout << "=============================================================================================\n";
    cout << "\nPress Enter to return to the menu...";
    string pause;
    getline(cin, pause);
}
