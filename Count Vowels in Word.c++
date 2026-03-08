#include <iostream>
using namespace std;

int main() {

    string word;
    int count = 0;

    cout << "Enter a word: ";
    cin >> word;

    for(char c : word){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            count++;
    }

    cout << "Vowels: " << count << endl;

    return 0;
}
