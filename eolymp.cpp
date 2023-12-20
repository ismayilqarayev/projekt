#include <iostream>

int main() {
    // Assuming 'grade' is the variable representing the student's grade
    int grade;

    // Get the grade as input
    std::cin >> grade;

    // Determine the level based on the grade
    if (grade >= 1 && grade <= 3) {
        std::cout << "Initial\n";
    }
    else if (grade >= 4 && grade <= 6) {
        std::cout << "Average\n";
    }
    else if (grade >= 7 && grade <= 9) {
        std::cout << "Sufficient\n";
    }
    else if (grade >= 10 && grade <= 12) {
        std::cout << "High\n";
    }
    else {
        std::cout << "Invalid grade\n";
    }

    return 0;
}


//////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int grade;
	cin >> grade;

	if (grade >= 1 && grade <= 3)
	{
		cout << "Initial\n";
	}

	else if (grade >= 4 && grade <= 6)
	{
		cout << "Average\n";
	}

	else if (grade >= 7 && grade <= 9)
	{
		cout << "Sufficient\n";
	}

	else if (grade >= 10 && grade <= 12)
	{
		cout << "High\n";
	}
	return 0;
}


/////////////////////////////////////////////////////////////////////////////////
/*
Üçrəqəmli ədəd verilmişdir. Onun rəqəmlərindən hansının - birincinin, yoxsa axırıncının böyük olduğunu müəyyənləşdirin.

Giriş verilənləri
Yeganə sətirdə üçrəqəmli ədəd verilir.

Çıxış verilənləri
Çıxışa göstərilən rəqəmlərdən böyüyünü verin. Onlar bərabər olduqda "=" işarəsini verin.

Nümunə*/

#include <iostream>
using namespace std;

int main()
{
    int num; 
    cin >> num;

    if (num >= 100 && num <= 999) 
    {
        int first = num / 100; 
        int last = num % 10; 

        if (first > last) 
        {
            cout << first << endl; 
        }

        else if (first < last) 
        {
            cout << last << endl; 
        }

        else 
        {
            cout << "The first and the last digits are equal." << endl; 
        }
    }
    else 
    {
        cout << "Invalid number." << endl; 
    }
    return 0; 
}
