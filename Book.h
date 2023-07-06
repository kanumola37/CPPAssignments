#ifndef BOOK_H 
#define BOOK_H
//*****************************************************************
// FILE:	Book.h
// AUTHOR:	Anumola Changalasetty
// LOGON ID: Z1942332
// 
//
// PURPOSE:	Contains the declaration for the Book class.
//*****************************************************************
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
class Book
{
		// Data Memebers in the Book header file
		private :
			char ISBN[11];
			char title[41];
			double price;
			int stock;
		public :
			Book();
			Book(char [],char [],double, int);	
			char* getISBN();
			char* getTitle();
			double getPrice();
			int getQuantity();
			void setPrice(double);
			void setQuantity(int);
			void fulfillOrder(int);
			void print();
};
#endif
