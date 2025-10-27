#include <iostream>
#include <cmath>      // ��� pow() �� sin()
#include <windows.h>  // ��� ��������� ���� � ������
using namespace std;

// ������� ���������� ����
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

    cout << "������ �������� x: ";
    cin >> x;

    double result = calculateSum(x);

    cout << "\n��������� ���������� ����: S = " << result << endl;

    return 0;
}
