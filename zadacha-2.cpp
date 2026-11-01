//метод выбора
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
    
    
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
       
        int k = a[i];
        a[i] = a[min];
        a[min] = k;
    }
    
    cout << "Отсортированный массив " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}