#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;
int main(){
		string myNameStr;
		//char letters[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		//int decoded=1;
		int total =0;
		cout<<"Numerology Pgm Starting:"<<endl;
		cout<<"Enter a name:"<<endl;
		getline(cin,myNameStr); 
	    for(int i= 0; i<myNameStr.length(); i++) {
            char letter = myNameStr.at(i);
            letter = tolower(letter);
			if('a'<=letter && letter<='z')
			    total += 1+ letter - 'a';
            cout<<total<<endl; // should print 1276
	}
	return 0;
}
