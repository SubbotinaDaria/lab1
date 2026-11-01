#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "65001");
    
    int N, a, i = 1;
    bool f = false; 
    
    cin >> N;
    
    while ((i <= N) && !f) {
        cin >> a;
        if (a == 0) {
            i++; 
        } else {
            f = true; 
        }
    }
    
    
    if (f) {
        if (a > 0) {
            cout << "число " << a << " положительное" << endl;
        } else {
            cout << "число " << a << " отрицательное" << endl; 
        }
    } else {
        cout << "все числа нули" << endl;
    }
    
    return 0;
}