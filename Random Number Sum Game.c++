#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int a = rand()%10;
    int b = rand()%10;

    int answer;

    cout << "What is " << a << " + " << b << " ? ";
    cin >> answer;

    if(answer == a+b)
        cout << "Correct!\n";
    else
        cout << "Wrong!\n";

    return 0;
}
