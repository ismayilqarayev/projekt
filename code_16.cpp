#include <iostream>
#include <cmath>

int main() {
    int a, n;

    // İstifadəçidən a və n ədədlərini almaq 
    std::cin >> a;
    std::cin >> n;

    // a^n qiymətini hesablamaq
    int result = std::pow(a, n); // a - ya 5 versək 
                                 // n - də 2 versək  
                                 // 5 reqemini iki defe öz özünə vuracaq yəni 5 * 5 
    // Nəticəni çap etmək        // bu pow emeliyyatı ilə hesablamadır
    std::cout << result << std::endl;

    return 0;
}
