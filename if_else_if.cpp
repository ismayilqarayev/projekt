#include <iostream>
using namespace std;

class App
{
public:

    int long long processNumbers()
    {
        long number_1 = {};
        std::cin >> number_1;

        long number_2 = { 2 };
        long number_3 = { 3 };
        long number_4 = { 4 };
        long number_5 = { 5 };


        if (number_1 == number_2)
        {
            int get = number_1 + number_2;
            std::cout << get << endl;
        }

        else if (number_1 == number_3)
        {
            int get_2 = number_1 + number_3;
            std::cout << get_2 << endl;
        }

        else if (number_1 == number_4)
        {
            int run = number_1 + number_4;
            std::cout << run << endl;
        }
    }

    void inputNumbers()
    {
        long number_6 = 600;
        long number_7 = 700;
        long number_8 = 800;
        long number_9 = 900;
        long number_10 = 100;

        int line = number_6 + number_7;
        std::cout << line << endl;
    }
};

int main()
{
    App app;
    app.processNumbers();
    app.inputNumbers();
    return 0;
}
