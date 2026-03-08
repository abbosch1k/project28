#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "How many numbers: ";
    cin >> n;

    int num;
    int count=0;

    for(int i=0;i<n;i++){
        cin >> num;

        if(num>0)
            count++;
    }

    cout << "Positive numbers: " << count << endl;

    return 0;
}
