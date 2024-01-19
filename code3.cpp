#include "iostream"
using namespace std;

class App
{
public:
    static int run()
    {
        int number_1 = {};
        cout << "Enter an integer: ";
        cin >> number_1;

        int number_2 = {2};
        int number_3 = {30};
        int number_4 = {40};

        if (number_1 == number_2)
        {
            long blok = number_1 + number_2;
            cout << blok << endl;
        }

        while(number_4 > number_3)
        {

            long fle = number_3 + number_4;
            cout << fle << endl;
            return 0;
        }
        return 0;
    }

    static void get()
    {
        int number = { 10 };
        number <<= 5;
        cout << number << endl;
    }
};

int main()
{
    App::run();
    App::get();

    int number = {};
    number = 2 + 4;
    cout << number;

    return 0;
}
