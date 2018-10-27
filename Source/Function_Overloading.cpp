// Function overloading
// Written by Marufur Rahman

#include <iostream>
using namespace std;

class friendInfo {
	public:
		void print(string name) {
			cout << "Name is " << name << endl;
		}
		void print(int age) {
			cout << "Age is " << age << endl;
		}
		void print(double gpa) {
			cout << "GPA is " << gpa << endl;
		}
};

int main() {
	friendInfo fi;

	fi.print("Kamal");
	fi.print(12);
	fi.print(3.50);

	return 0;
}
