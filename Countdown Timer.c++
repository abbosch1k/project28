#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {

    int seconds;

    cout << "Enter seconds: ";
    cin >> seconds;

    for(int i=seconds;i>=0;i--){
        cout << i << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }

    cout << "Time's up!\n";

    return 0;
}
