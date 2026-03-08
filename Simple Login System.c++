#include <iostream>
using namespace std;

int main() {

    string username,password;

    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;

    if(username=="admin" && password=="1234")
        cout << "Login successful\n";
    else
        cout << "Login failed\n";

    return 0;
}
