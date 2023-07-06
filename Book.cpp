#include "Book.h"
//Constructor with No Arguments
#include <iostream>
#include<string.h>
Book :: Book()
{
	strcpy(ISBN,"");
    strcpy(title,"");
    price=0;
    stock=0;
}
//Constructor with Arguments which is declared in the class
Book :: Book(char isbn_num[],char title_book[],double book_price, int book_stock){
	strcpy(ISBN,isbn_num);
	strcpy(title,title_book);
	price = book_price;
	stock = book_stock;
}
//This is used to get the ISBN Details
char* Book :: getISBN()
{
    return ISBN;
}
// This is used to return the Title of the Book
char * Book :: getTitle(){
	return title;
}
//This is used to return the Price of the Book
double Book :: getPrice(){
	return price;	
}
// This is used to get the quantity of the Book
int Book :: getQuantity(){
	return stock;
}
void Book::setPrice(double bk_price)
{
    price = bk_price;
}
void Book :: setQuantity(int bk_return){
	stock = bk_return;
}
void Book :: fulfillOrder(int bk_order){
	stock = bk_order;
}
void Book::print()
{    
    cout << ISBN << setw(14 - strlen(ISBN) + 9)<< title << setw(44-strlen(title)) << price << setw(5) << stock << setw(6) <<endl;
}
