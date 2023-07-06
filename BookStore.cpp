#include "BookStore.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
BookStore :: BookStore()
{
    count = 0;
}
BookStore :: BookStore(char *fileName)
{
    ifstream inFile; //infile
    inFile.open(fileName); //opens file

    //checks existence of file
    if(inFile.fail())
    {
        cout<<"can not find the file "<<fileName<<endl;
        exit(0);
    }
    //reads data from file to array
    inFile.read((char *)this, sizeof(Book_array));
    //closes the file
    inFile.close();
}
void BookStore :: print()
{
    cout<<"Book Inventory Listing"<<endl;    
    for(int i=0;i<count;i++)
        Book_array[i].print();
}
