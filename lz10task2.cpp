#include <iostream>
#include <cmath>      // для pow() та sin()
#include <windows.h>  // для української мови в консолі
using namespace std;

// Функція обчислення суми
double calculateSum(double x) {
    double S = 0;
    for (int k = 1; k <= 7; ++k) {
        S += (pow(2, k) * sin(x + k)) / pow((x + 1), k);
    }
    return S;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x;

    cout << "Введіть значення x: ";
    cin >> x;

    double result = calculateSum(x);

    cout << "\nРезультат обчислення суми: S = " << result << endl;

    return 0;
}
