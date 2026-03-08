#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    string emoji[]={"😀","😎","🔥","🚀","🎮","⭐"};

    cout << "Random emoji: " << emoji[rand()%6] << endl;

    return 0;
}
