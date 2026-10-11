#include <iostream> //ввод и вывод данных
#include <locale> //локализация 
#include <cmath>
using namespace std; //без префикса
int main() {
    setlocale(LC_ALL, ".65001"); //подключаем кириллицу
    //задание 1 с float
    float a_f = 1000.0f; 
    float b_f = 0.0001f; 
    float sab_f = a_f+b_f;
    float sab4_f = pow(sab_f, 4.0f); 
    float a4_f = pow(a_f,4.0f); 
    float a3_f = pow(a_f, 3.0f); 
    float z_f = 4*a3_f*b_f; 
    float a2_f = pow(a_f,2.0f); 
    float b2_f = pow(b_f,2.0f);
    float c_f = 6*a2_f*b2_f;
    float sum_f = a4_f + z_f + c_f;
    float chisl_f = sab4_f - sum_f;
    float b3_f = pow(b_f, 3.0f);
    float b4_f = pow(b_f, 4.0f);
    float s_f = 4*a_f*b3_f;
    float znam_f = s_f + b4_f;
    float rezult_f = chisl_f/znam_f;
    cout <<"Результат с float:"<<rezult_f<<endl;

    //задание 1 с double
    double a_d = 1000.0;
    double b_d = 0.0001;
    double sab_d= a_d+b_d;
    double sab4_d = pow(sab_d, 4.0);
    double a4_d = pow(a_d,4.0);
    double a3_d = pow(a_d, 3.0);
    double z_d = 4*a3_d*b_d;
    double a2_d = pow(a_d,2.0);
    double b2_d = pow(b_d,2.0);
    double c_d = 6*a2_d*b2_d;
    double sum_d = a4_d + z_d + c_d;
    double chisl_d = sab4_d - sum_d;
    double b3_d = pow(b_d, 3.0);
    double b4_d = pow(b_d, 4.0);
    double s_d = 4*a_d*b3_d;
    double znam_d = s_d + b4_d;
    double rezult_d = chisl_d/znam_d;
    cout <<"Результат с double:"<<rezult_d<<endl;
    return 0;
}
//1 - 3.2768e+13

//2 - -30517.6










