#include <iostream>
using namespace std;

int main() {

    int a,b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if(a>b)
        cout << "First is bigger\n";
    else if(b>a)
        cout << "Second is bigger\n";
    else
        cout << "Numbers are equal\n";

    return 0;
}
