//метод вставки
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
    
   
    for (int i = 1; i < n; i++) {
        int k = a[i]; 
        bool f = false;
        int j = i - 1;
        
        while (j >= 0 && !f) {
            if (a[j]>k){
                 a[j + 1] = a[j];
                j--;

            }
            else{
                f=true;
            }
           
        }
        a[j + 1] = k; 
    }
    
    cout << "Отсортированный массив " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}