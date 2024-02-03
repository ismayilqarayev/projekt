#include <iostream>
using namespace std;

int main()
{
    int number_1 = 10;
    int number_2 = 10;

    while (true) 
    { 
        if (number_1 == number_2)
        {
            int b = 2 * (number_1 + number_2);
            cout << b;
            if (b == 40)
            {
                cout << b / 2;
            }
            return 0; // return kodunu silsek eger kod tekrarlanacaq
        }

    }
}
