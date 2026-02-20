#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double P, r, n, t;

    cout << "Ingrese el capital inicial (P): ";
    cin >> P;

    cout << "Ingrese la tasa de interes anual en decimal (r): ";
    cin >> r;

    cout << "Ingrese cuantas veces se aplica al ano (n): ";
    cin >> n;

    cout << "Ingrese el numero de anos (t): ";
    cin >> t;

    double A = P * pow((1 + r/n), n*t);

    cout << "El monto final es: " << A << endl;

    return 0;
}