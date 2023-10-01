#include <iostream>
using namespace std;

int main() {
    int userN;
    cin >> userN; // user input for number

    int a = 0, b = 1, i = 1;

    cout << a;
    for (i; i < userN; ++i) {
        cout << " " << b;
        int next = a + b;
        a = b;
        b = next;
    }

    cout << endl;
    return 0;
}
