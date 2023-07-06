#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;
void Selection_Sort(double numbers[], int nano1)
{

    sort(numbers, numbers + nano1);

    cout << "\nHere is table after selection sort :\n"<<endl;
    cout << setprecision(2) << fixed;
	    for (int i = 0; i < nano1; ++i)
	    {
	
		        cout << setw(9)<< right << numbers[i];
		        if((i+1)%8 == 0)
		            cout << "\n";
	    }

}
void Array_Printing(double numbers[], int nano1)
{

    cout << "\n Here is unsorted table after reading in data :\n"<<endl;
    cout << setprecision(2) << fixed;
    for (int i = 0; i < nano1; ++i)
    {

        cout << setw(9)<< right << numbers[i];
        if((i+1)%8 == 0)
            cout << "\n";
    }
}
int Building_Array(double numbers[],int length)
{
    while(cin >> numbers[length])
    {
   		 length++;
    }
    return length;
}
int main()
{
    double numbers[100],length =0;
	cout<< " Please Enter numbers from the Console and Hit CTRL+D for closing: \n";
    length=Building_Array(numbers,length);
    Array_Printing(numbers,length);
    Selection_Sort(numbers,length);
}
