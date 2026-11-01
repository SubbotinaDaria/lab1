#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, ".65001");

    int n, k;
    int a[100]; 

    cout << "Введите начальный размер кольца: ";
    cin >> n;

    cout << "Введите " << n << " элементов кольца: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Введите номер элемента K (от 1 до " << n << ") ";
    cin >> k;
    int k_idx = k - 1; // Переводим номер в индекс (от 0)

   
    cout << "Кольцо от K элемента до K-1: " << endl;
    for (int i = 0; i < n; i++) {
        int c_idx = (k_idx + i) % n; 
        cout << a[c_idx] << " ";
    }
    cout << endl;

    
    int f, l;
    cout << "\nВведите новый ПЕРВЫЙ элемент для вставки: ";
    cin >> f;
    cout << "Введите новый ПОСЛЕДНИЙ элемент для вставки: ";
    cin >> l;

   
    for (int i = n; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = f;
    n++; 

    
    a[n] = l;
    n++; 

   
    k_idx = k_idx + 1; 

    
    int x = 0;
    int old_k_idx = k_idx; 
    int e = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) { // Если элемент НЕчётный — сохраняем его
            a[x] = a[i];
            x++;
        } else { // Если чётный — удаляем (не копируем)
            if (i < old_k_idx) {
                e++; 
            }
        }
    }
    n = x; // Обновляем размер кольца после удаления

    // Корректируем индекс K после удаления элементов перед ним
    k_idx = k_idx - e;
    if (k_idx < 0) k_idx = 0;
    if (n > 0) k_idx = k_idx % n; // На случай кольцевого выхода за границы

    
    if (n == 0) {
        cout << "\nПосле удаления чётных элементов кольцо стало пустым!" << endl;
    } else {
        cout << "\nИтоговое кольцо (без чётных, от скорректированного K до K-1): " << endl;
        for (int i = 0; i < n; i++) {
            int current_idx = (k_idx + i) % n;
            cout << a[current_idx] << " ";
        }
        cout << endl;
    }

    return 0;
}

