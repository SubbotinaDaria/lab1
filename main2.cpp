#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian"); 
    double a, b;
    cout << "Введите коэффициенты a и b для уравнения ax + b = 0:\n";
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    if (a == 0) {
        if (b == 0) {
            cout << "Решение: x — любое число (бесконечно много решений)." << endl;
        } else {
            cout << "Решение: корней нет." << endl;
        }
    } else {
        double x = -b / a;
        cout << "Решение: x = " << x << endl;
    }

    return 0;
}