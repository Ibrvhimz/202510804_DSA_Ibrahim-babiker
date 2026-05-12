#include <iostream>
#include <vector>
using namespace std;

int main() {

    int secretNumber = 7;
    int userGuess = 0;

    vector<int> guesses;

    while (userGuess != secretNumber) {

        cout << "Enter a number: ";
        cin >> userGuess;

        guesses.push_back(userGuess);

        if (userGuess > secretNumber) {
            cout << "Too high" << endl;
        }
        else if (userGuess < secretNumber) {
            cout << "Too low" << endl;
        }
        else {
            cout << "Correct" << endl;
        }
    }

    cout << "\nAll guesses:" << endl;

    for (int i = 0; i < guesses.size(); i++) {
        cout << guesses[i] << endl;
    }

    return 0;
}
