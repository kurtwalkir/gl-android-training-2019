#include <iostream>
using namespace std;

#define MAX_ATTEMPTS_NUMBER 3

int main(int argc, char **argv) {
    bool exit = false;
    bool result = false;

    cout << "Lets play the game!!!" << endl;

    while (false == exit) {
        char number = '0';
        static int attempts = MAX_ATTEMPTS_NUMBER;

        cout << "Guess a number from 0 to 9" << endl;
        cin >> number;

        attempts--;

        /* Checking result here */
        if ('0' == number) {
            result = true;
            exit = true;
        } else if (attempts > 0) {
            cout << "You have " << attempts << " more attempts. Try to guess." << endl;
        } else {
            exit = true;
        }

        /* Clear cin to truncate all characters except first one */
        cin.clear();
    }

    if (result) {
        cout << "You've won!!!" << endl;
    } else {
        cout << "You've  lose!!!" << endl;
    }

    return 0;
}
