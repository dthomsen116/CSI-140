#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;
int main() {

    int a,b,c;
    cin >> a >> b >> c;
    int values[3] = {a,b,c};

    sort(values, values + 3);

    for (int value : values) {
        cout << value << endl;
    }
    cout << endl;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;


    return 0;
}
