#ifndef BOOKSTORE_H 
#define BOOKSTORE_H
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
#include "Book.h"
#include <iomanip>
using namespace std;
class BookStore
{
		// Data Memebers in the Book header file
		private :
			Book Book_array[20];
			int count;
		public :
			BookStore();
			BookStore(char *);
			void print();
};
#endif

