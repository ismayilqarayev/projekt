#include <iostream>
using namespace std;

int main() 
{
	
	int birinci_eded;
	cout << "birinci ededi daxil edin: "; 
	cin >> birinci_eded;


	int a = 0, b = 0, c = 0;
	cout << "ikinci ededi daxil edin: ";
	cin >> a, b, c;
	
	if (birinci_eded >= a) 
	{
		int x = 5;
		x += 2;
		cout << x << "\n";
	}

	else if (birinci_eded != b) 
	{
		int y = 5;
		y *= 2;
		cout << y << "\n";
	}

	else if (birinci_eded <= c) 
	{
		int z = 5;
		z /= 2;
		cout << z << "\n";
	}
}


