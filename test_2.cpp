#include <iostream>
using namespace std;

class App
{
public:
	void run()
	{
		int number = { 10 };
		number += 10;
		number += 10;
		cout << number << endl;
	}

	void get()
	{
		int number = { 10 };
		number += 30;
		cout << number << endl;
	}
};

int main()
{
	App app;
	app.run();
	app.get();
	int number = {};
	number = 2 + 4;
	cout << number;
}
