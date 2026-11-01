#include <iostream> 
int main() {
    int n = 10;
    int m = 5;
    // 1) n++ * m
    int n1 = 10;
    int m1 = 5;
    std::cout << "1) " << n1++ * m1 << " (n теперь: " << n1 << ")" << std::endl;
    // 2) n++<m
    int n2 = 10;
    int m2 = 5;
    std:: cout << "2) "<< (n2++ < m2) << " (n теперь: " << n2 << ")" << std::endl;
    //3) m-- > m
    int m3 = 5;
    std:: cout << "3) " << (m3-- > m3)<< " (m теперь: " << m3 <<")"<< std::endl;
    return 0;
}
