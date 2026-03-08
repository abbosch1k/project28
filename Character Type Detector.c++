#include <iostream>
using namespace std;

int main() {

    char c;

    cout << "Enter character: ";
    cin >> c;

    if(isdigit(c))
        cout << "Digit\n";

    else if(isalpha(c))
        cout << "Letter\n";

    else
        cout << "Special character\n";

    return 0;
}
