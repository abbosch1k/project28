#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int number = rand()%100 + 1;
    int guess;

    cout << "Guess the number (1-100): ";

    while(true){

        cin >> guess;

        if(guess > number)
            cout << "Too high\n";

        else if(guess < number)
            cout << "Too low\n";

        else{
            cout << "Correct!\n";
            break;
        }
    }

    return 0;
}
