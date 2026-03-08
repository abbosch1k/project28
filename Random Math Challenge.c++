#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int a = rand()%20 + 1;
    int b = rand()%20 + 1;

    int answer;

    cout << a << " + " << b << " = ";
    cin >> answer;

    if(answer == a+b)
        cout << "Correct!\n";
    else
        cout << "Wrong! Correct answer: " << a+b << endl;

    return 0;
}
