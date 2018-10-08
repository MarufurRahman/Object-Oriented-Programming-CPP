// C++ classes and objects
// Written by Marufur Rahman

#include <iostream>

using namespace std;

// Create a class blueprint for book objects
class Book { 
	public:
		string booksTitle;
		string booksAuthor;
		int booksPages;
};

int main()
{
	Book book1; // Create a book object

	book1.booksTitle = "Programming in Python 3";
	book1.booksAuthor = "Mark Summerfield";
	book1.booksPages = 495;

	return 0;
}
