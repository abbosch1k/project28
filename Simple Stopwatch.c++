#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {

    int seconds;

    cout << "Stopwatch seconds: ";
    cin >> seconds;

    for(int i=1;i<=seconds;i++){

        cout << "Time: " << i << " sec\n";

        this_thread::sleep_for(chrono::seconds(1));
    }

    cout << "Stopwatch finished!\n";

    return 0;
}
