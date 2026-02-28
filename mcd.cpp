#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    while (b != 0) {
        int residuo = a % b;
        a = b;
        b = residuo;
    }

    cout << "El MCD es: " << a << endl;

    return 0;
}
