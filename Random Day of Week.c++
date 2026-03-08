#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    string days[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

    cout << "Random day: " << days[rand()%7] << endl;

    return 0;
}
