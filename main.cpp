#include <iostream>
using namespace std;

// ===============================
// Función para calcular promedio
// ===============================
double calcularPromedio(double valores[], int n)
{
    if (n <= 0) return 0.0;  // Protección básica

    double suma = 0.0;

    for (int i = 0; i < n; i++)
    {
        suma += valores[i];
    }

    return suma / n;
}

// ===============================
// Programa principal
// ===============================
int main()
{
    int n;

    cout << "Ingrese la cantidad de valores: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Cantidad invalida." << endl;
        return 1;
    }

    double valores[n];  // arreglo dinámico estilo C++

    cout << "Ingrese los " << n << " valores:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Valor " << i + 1 << ": ";
        cin >> valores[i];
    }

    double promedio = calcularPromedio(valores, n);

    cout << "\nEl promedio es: " << promedio << endl;

    return 0;
}