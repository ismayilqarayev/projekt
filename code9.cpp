#include <iostream>
using std::cin;
using std::cout;
using std::endl;
typedef unsigned long long ullong;

class App
{
public:
    void run()
    {
        short number_a{ 8 };
        short number_b{ ++number_a };
        cout << number_a << " " << number_b << endl;
    }

    
    int get()
    {
        short number_c = 1;
        short line = { ++number_c };
        cout << number_c << " " << line << endl;
        return number_c;
    }

    int long long fun_1()
    {
        int number_1 = { 8 };
        int number_2 = { 7 };
        int runner = { (number_1 + 5) * ++number_2 };
        cout << runner << " " << endl;
        return runner;
    }
};

int main()
{
    App app;
    app.run();

    short blok_1 = app.get();
    int blok_2 = app.fun_1();

    return 0;
}
