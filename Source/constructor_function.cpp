// Constructor function
// Code written by Marufur Rahman

#include <iostream>
using namespace std;

class Book {
	public:
		string title;
		string author;
		int pages;

		Book(string aTitle, string aAuthor, int aPages) {
			title = aTitle;
			author = aAuthor;
			pages = aPages;
		}
};

int main() {
	Book book1("Learn Python the Hard Way", "Zed Shaw", 769);
	Book book2("Head First Java", "Bert Bates and Kathy Sierra", 701);

	cout << book1.title;

	return 0;
}
