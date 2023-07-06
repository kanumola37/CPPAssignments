#include <iostream>
#include "Book.h"
#include "BookStore.h"
using namespace std;
int main(){
	// Testing Default Constructor
	cout<<"Starting test program to test book class\n"<<endl;
	//char path[]="Bookstore.txt";
	char isbn1[11] = "1111111111";
	char title1[41] = "Learn C++ Now";
	//char isbn2[11] = "2222222222";
	//char title2[41] = "Learn Java Later"; 
	int numShipped;
	Book book1;
	Book book2(isbn1, title1, 39.99, 5);
	// Test print() method and whether constructors
	// properly initialized objects	
	cout << "Printing Book 1\n\n";
	book1.print();
	cout << endl;
	
	cout << "Printing seller2\n\n";
	book2.print();
	cout << endl;
	//Test accessor methods
	cout << book2.getISBN() << endl; 
	cout << book2.getTitle() << endl; 
	cout << book2.getPrice() << endl; 
	cout << book2.getQuantity() << endl;
//	// Test the fulfillOrder() method 
//	//numShipped = book2.fulfillOrder(-5);
//	cout << "\nShipped " << numShipped << endl;
//	cout << "Quantity now " << book2.getQuantity() << endl;
//	numShipped = book2.fulfillOrder(3);
//	cout << "Shipped " << numShipped << endl;
//	cout << "Quantity now " << book2.getQuantity() << endl;
//	numShipped = book2.fulfillOrder(4);
//	cout << "Shipped " << numShipped << endl;
//	cout << "Quantity now " << book2.getQuantity() << endl;
	//char path[]={'B','o','o','k','s','t','o','r','e','.','t','x','t'};
	
	BookStore book_db1;
	BookStore book_db2("Bookstore.txt");
	cout << "Printing The Book Store the default Constructor \n\n";
	book_db1.print();
	cout << "Printing The Book Store the default Constructor with text file\n\n";
	book_db2.print();
	return 0;	
	
	
}
