#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    cout << "Random number: " << rand()%100 << endl;

    return 0;
}
