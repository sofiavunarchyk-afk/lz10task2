<img width="471" height="70" alt="image" src="https://github.com/user-attachments/assets/6a8f142d-5b70-4a69-9144-9860e0ba46af" />
<img width="151" height="53" alt="image" src="https://github.com/user-attachments/assets/39ed3acb-b0e1-441b-84c9-6bb6b1ea7a01" />

 🧩 Опис алгоритму

Програма зчитує значення змінної x, після чого обчислює суму
<img width="208" height="64" alt="image" src="https://github.com/user-attachments/assets/38e74d69-26bc-4bd3-840b-59e6c942064d" />

Обчислення виконується у циклі for, де для кожного значення k знаходиться окремий доданок і додається до загальної суми. Після завершення циклу програма виводить отриманий результат на екран.

```
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

```
<img width="861" height="359" alt="image" src="https://github.com/user-attachments/assets/89aeff08-a071-40fd-b655-a39aec118a26" />

<img width="597" height="1223" alt="Програмування (1)" src="https://github.com/user-attachments/assets/81af2d3a-1b89-4c22-bb69-3fd70e2455a3" />
<img width="797" height="1318" alt="Програмування (2)" src="https://github.com/user-attachments/assets/a31287dd-8ac4-4c39-be37-f0693bce568e" />


Висновок
У ході виконання завдання було створено програму мовою C++, яка обчислює суму за формулою

<img width="180" height="60" alt="image" src="https://github.com/user-attachments/assets/2ec00471-4bf1-4c89-83bb-e5ad2556f5d3" />

Під час виконання роботи було закріплено знання про створення та використання функцій, роботу з циклами та математичними операціями в мові C++.
Програма працює коректно, результати обчислень відповідають аналітичним розрахункам, що підтверджує достовірність отриманих результатів.

