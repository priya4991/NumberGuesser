#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int num, guess, tries = 0;
    srand(time(0));
    num = rand() % 100 + 1; //1 to 100
    cout << "Guess then number\n\n";
    do {
        cout << "Enter a number\n";
        cin >> guess;
        tries++;

        if (guess > num) {
            cout << "Too high!\n\n";
        } else if (guess < num) {
            cout << "Too low!\n\n";
        } else {
            cout << "Correct guess! You got it in " << tries << " tries.";
        }
    } while(guess != num);
    return 0;

}