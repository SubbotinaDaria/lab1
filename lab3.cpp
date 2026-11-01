#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main() {
    
    setlocale(LC_ALL, "Russian");

    double a = 0.1;
    double b = 0.8;
    int k = 10;
    double h = (b - a) / k; 
    double pi = 3.141592653589793;
    double eps = 0.0001;

   
    // Цикл по всем значениям x
    for (int i = 0; i <= k; i++) {
        double x = a + i * h;

        // 1. Вычисление точного значения функции
        double Y = 0.5 - (pi / 4.0) * abs(sin(x));

        // 2. Вычисление суммы для фиксированного n = 50
        double Sf = 0.0;
        for (int n = 1; n <= 50; n++) {
            double t = cos(2.0 * n * x) / (4.0 * n * n - 1.0);
            Sf += t;
        }

        // 3. Вычисление суммы для заданной точности
        double S = 0.0;
        double term_eps = 0.0;
        int n = 1;
        
        while (true) {
            term_eps = cos(2.0 * n * x) / (4.0 * n * n - 1.0);
            S += term_eps;
            
            // Если модуль члена ряда стал меньше точности, выходим из цикла
            if (abs(term_eps) < eps) {
                break;
            }
            n++; // Переходим к следующему члену
        }

        // Выводим результаты (знак минус перед S, так как ряд сходится к -Y)
        cout << x << "\t\t" << Y << "\t\t" << -Sf << "\t\t" << -S << "\n";
    }

    return 0;
}