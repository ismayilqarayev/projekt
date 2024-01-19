#include <iostream>
using namespace std;

int main() 
{
	
	int birinci_eded;
	cout << "birinci ededi daxil edin: "; 
	cin >> birinci_eded;


	int ikinci_eded;
	cout << "ikinci ededi daxil edin: ";
	cin >> ikinci_eded;
	
	if (birinci_eded >= ikinci_eded) 
	{
		int x = 4 << 2;
		cout << x << "\n";
	}

	else if (birinci_eded <= ikinci_eded) 
	{
		int y = 3 << 2;
		cout << y << "\n";
	}
}


