#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double n;
    int half, total, hundy, fifty, twenty, ten, five, two, dollar, quarter, dime, nickel, penny;

    cin >> setprecision(2) >> n;
    total = n * 100;

    hundy = total / 10000;
    total = total % 10000;

    fifty = total / 5000;
    total = total % 5000;

    twenty = total / 2000;
    total = total % 2000;

    ten = total / 1000;
    total = total % 1000;


    five = total / 500;
    total = total % 500;

    two = total / 200;
    total = total % 200;

    dollar = total / 100;
    total = total % 100;

    half = total / 50;
    total = total % 50;

    quarter = total / 25;
    total = total % 25;

    dime = total / 10;
    total = total % 10;

    nickel = total / 5;
    total = total % 5;

    penny = total / 1;
    total = total % 1;

    cout << "NOTAS:" << endl;
    cout << hundy << " nota(s) de R$ 100.00" << endl;
    cout << fifty << " nota(s) de R$ 50.00" << endl;
    cout << twenty << " nota(s) de R$ 20.00" << endl;
    cout << ten << " nota(s) de R$ 10.00" << endl;
    cout << five << " nota(s) de R$ 5.00" << endl;
    cout << two << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;
    cout << dollar << " moeda(s) de R$ 1.00" << endl;
    cout << half << " moeda(s) de R$ 0.50" << endl;
    cout << quarter << " moeda(s) de R$ 0.25" << endl;
    cout << dime << " moeda(s) de R$ 0.10" << endl;
    cout << nickel << " moeda(s) de R$ 0.05" << endl;
    cout << penny << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
