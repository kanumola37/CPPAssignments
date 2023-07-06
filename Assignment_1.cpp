#include <iostream>
#include <conio.h>
#include<algorithm>
#include <cctype>
#include<string.h>
#include <windows.h>
using namespace std;
int main(int argc,char** argv) {
	int k,l;
	cout << "*********************** Welcome to Assignment 1 **********************************\n";
	char assigArr[8][10] ={"newton","maxwell","einstein",
							"rogers","anderson","zelmo",
							"jones","leyland"}; // Declaring the array of elements
    cout <<"Names in the Array : \n" <<endl; // printing the array of elements
	for (int i=0; i<8;i++){
        cout<<assigArr[i]<<endl;
    }
    cout <<"************************* Sorting the Array **************************************\n"<<endl;
     for(int i=0;i<8-1;i++){ // Sorting the Array of Elements using bubble sort for efficent output
    for(int j=0; j<8-i-1; j++){ // Used Bubble Sort Algorithm to Sort the array of elements
        l = min(strlen(assigArr[j]),strlen(assigArr[j+1]));
        for(k=0;k<l;++k)
            if(assigArr[j+1][k]<assigArr[j][k]){ swap(assigArr[j],assigArr[j+1]); break; }
            else if(assigArr[j+1][k]>assigArr[j][k]) break;
        if(k==l and strlen(assigArr[j])>strlen(assigArr[j+1]))
            swap(assigArr[j],assigArr[j+1]);
        }
    }
    cout<<"After Sorting the list :" <<endl;
    for (int i=0; i<=8; i++){
        cout<<assigArr[i]<<endl; // Prining th elements after sorting
    }
    cout<<"***************************Making First and Last Letter Capitalized*************************************"<<endl;
	for (int i = 0; i<=8; i++)
    {
        for(int j=0;j<=strlen(assigArr[i]); j++) // Capitalizing the first and last elements using toupper() function.
        {
            if(j==0 || j==strlen(assigArr[i])-1)
            {
                cout << (char)toupper(assigArr[i][j]) ;
            }
        else 
			cout << assigArr[i][j] ;
        }
        cout << "\n";
    }
   	return 0;
}
