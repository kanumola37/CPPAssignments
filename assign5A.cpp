#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <ctime>
#include <fstream>
#include <iomanip>
using namespace std;
void printArray(int arr[15])
{
	for(int k=0;k<15;k++)
	  {	  	
		   	cout  << arr[k];
			if((k+1)%8 != 0) 
			{
				if(k!=34)
				cout << " ";
			}			
			else cout << "\n";			 
	  }
}

int main() {
    int numbers[100];
    int a;	 
    int k=0;
    cout<<"Please Enter 15 numbers from the Console and Hit CTRL+D for closing:"<<endl;
	while(cin >> numbers[k])
	{	  	
	  k++;  				 
	}
	cout<<"Here is unsorted table after reading in data\n";
	printArray(numbers);  
	for (int i = 0; i < 15; ++i)
		{
		   for (int j = i + 1; j < 15; ++j)
		   {
		      if (numbers[i] > numbers[j])
			  {
		         a = numbers[i];
		         numbers[i] = numbers[j];
		         numbers[j] = a;
		      }
		   }
		}
		
		 cout<<"\nHere is table after selection sort\n";
	  printArray(numbers);
	return 0;
}
