#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;


    int smallest = a;
    if (b < smallest) {
        smallest = b;
    }
    if (c < smallest) {
        smallest = c;
    }


    int largest = a;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }

    int middle = a;
    if (a != smallest && a != largest) {
        middle = a;
    } else if (b != smallest && b != largest) {
        middle = b;
    } else {
        middle = c;
    }

    cout << smallest << endl << middle << endl << largest << endl;
    cout << endl;
    cout << a << endl << b << endl << c << endl;
    return 0;
}
