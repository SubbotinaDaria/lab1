#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian"); 
    double a, b, c;
    cout << "Введите коэффициенты a, b и c для уравнения ax^2 + bx + c = 0:\n";
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    // Случай 1: уравнение вырождается в линейное bx + c = 0
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "Решение: x — любое число (бесконечно много решений)." << endl;
            } else {
                cout << "Решение: корней нет." << endl;
            }
        } else {
            double x = -c / b;
            cout << "Уравнение линейное. Решение: x = " << x << endl;
        }
    } 
    // Случай 2: полноценное квадратное уравнение
    else {
        double D = b * b - 4 * a * c; // Вычисление дискриминанта

        if (D > 0) {
            double x1 = (-b + sqrt(D)) / (2 * a);
            double x2 = (-b - sqrt(D)) / (2 * a);
            cout << "Два корня:\n";
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        } 
        else if (D == 0) {
            double x = -b / (2 * a);
            cout << "Один корень:\n";
            cout << "x = " << x << endl;
        } 
        else { // D < 0
            double n = -b / (2 * a);
            double m = sqrt(-D) / (2 * a);
            cout << "Корни :\n";
            cout << "x1 = " << n << " + " << m << "i" << endl;
            cout << "x2 = " << n << " - " << m << "i" << endl;
        }
    }

    return 0;
}