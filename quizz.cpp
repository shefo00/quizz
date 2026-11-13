#include <iostream>
using namespace std;

struct Question {
    string question;
    string choices[3];
    char answer;
};

 int main() {

    Question questions[2] = {
        {
            "What does OOP stand for?",
            {"a) Object Oriented Programming", "b) Only One Program", "c) Open Output Protocol"},
            'a'
        },
        {
            "Which keyword defines a class in C++?",
            {"a) function", "b) class", "c) struct only"},
            'b'
        }
    };

    int score = 0;
    char userAnswer;

    cout << "=== Quiz App ===" << endl;

    for (int i = 0; i < 2; i++) {

        cout << "\nQ" << i + 1 << ": " << questions[i].question << endl;

        for (int j = 0; j < 3; j++) {
            cout << questions[i].choices[j] << endl;
        }

        cout << "Your answer: ";
        cin >> userAnswer;

        while (userAnswer != 'a' && userAnswer != 'b' && userAnswer != 'c') {
            cout << "Invalid answer! Enter a, b, or c: ";
            cin >> userAnswer;
        }

        if (userAnswer == questions[i].answer) {
            cout << "Correct!" << endl;
            score++;
        }
        else {
            cout << "Wrong! Correct answer: "
                 << questions[i].answer << endl;
        }
    }

    cout << "\n=== Quiz Complete ===" << endl;
    cout << "Score: " << score << " / 2" << endl;

    return 0;
}