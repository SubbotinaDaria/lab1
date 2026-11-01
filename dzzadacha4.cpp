#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, ".65001");

    int x, y;
    int a[100][100]; 
    cout << "Введите количество строк: ";
    cin >> x;
    cout << "Введите количество столбцов: ";
    cin >> y;

    
    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> a[i][j];
        }
    }
    int max = a[0][0];
    int max_x = 0;
    int max_y = 0;

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (a[i][j] > max) {
                max = a[i][j];   
                max_x = i;    
                max_y = j;    
            }
        }
    }


    cout << "Максимальный элемент: " << max << endl;
    cout << "Индекс строки: " << max_x << " (Номер строки: " << max_x + 1 << ")" << endl;
    cout << "Индекс столбца: " << max_y<< " (Номер столбца: " << max_y + 1 << ")" << endl;

    return 0;
}