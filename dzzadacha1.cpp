#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, ".65001");

    int n;
    int a[100]; 

    cout << "Введите размер массива: ";
    cin >> n;

    cout << "Введите " << n << " чисел: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    
    int min = a[0];
    int max = a[0];
    
    // Индексы первого встретившегося минимального и максимального элементов
    int min_idx = 0;
    int max_idx = 0;

   
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            min_idx = i; 
        }
        if (a[i] > max) {
            max = a[i];
            max_idx = i; 
        }
    }

    
    int min_count = 0;
    int max_count = 0;
    
    for (int i = 0; i < n; i++) {
        if (a[i] == min) {
            min_count++;
        }
        if (a[i] == max) {
            max_count++;
        }
    }

   
    cout << "Минимальный элемент: " << min << endl;
    cout << "  Индекс: " << min_idx << " (Номер: " << min_idx + 1 << ")" << endl;
    cout << "  Количество: " << min_count << endl;

    cout << "\nМаксимальный элемент: " << max << endl;
    cout << "  Индекс: " << max_idx << " (Номер: " << max_idx + 1 << ")" << endl;
    cout << "  Количество: " << max_count << endl;

    return 0;
}
