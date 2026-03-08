#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int temp = rand()%40 - 10;

    cout << "Today's random temperature: " << temp << " C\n";

    return 0;
}
