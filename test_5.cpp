#include <iostream>

int main()
{
    int num_1, num_2, num_3;

    std::cout << "Ikireqemli ededi daxil edin: ";
    std::cin >> num_1;

    num_2 = num_1 / 10;
    num_3 = num_1 % 10;

    std::cout << num_2 << " " << num_3;
    return 0;
}
