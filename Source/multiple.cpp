// Decide whether m is a multiple of n
// Code written by Marufur Rahman

#include <iostream>

using namespace std;

class Multiple
{
	long int m, n;
	double o;

	public:
		void getdata();
		void display();
};

void Multiple :: getdata(void)
{
	cin >> m >> n;
}

void Multiple :: display(void)
{
	o = m%n;

	if(o==0)
	{
		cout << "m is multiple of n" << endl;
	}
	else
	{
		cout << "m is not a multiple of n" << endl;
	}
}

int main()
{
	Multiple a;
	a.getdata();
	a.display();

	return 0;
}
