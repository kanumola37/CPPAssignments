#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <ctime>
#include <fstream>
#include <iomanip>

using namespace std;
int main() {
    srand(17);
    int numbers[1000];
    int count =0;
    int a;
    int cnt = 0;
    int x;
	ofstream myfile;
	ofstream sortDataFile;
	myfile.open ("Anumola_Changalasetty.txt");// step1 starts here
	for(int k=0;k<35;k++)
	  {	  	
		    numbers[k] = 1 + rand() % (( 1000 + 1 ) - 1); //1 + rand() % (( 1000 + 1 ) - 1)
		    double x=numbers[k];
			myfile<<fixed<<setprecision(2)<<right<<setw(6)<<x<<"   ";				
			if((k+1)%8 != 0) 
			{
//				if(k!=34)
//				myfile<<setw(9);
			}			
			else myfile <<"\n";
				count++;			 
	  }	
	
		ofstream out("Anumola_Changalasetty.txt");
		out.close();// till here step 1
		 ifstream inFile("Anumola_Changalasetty.txt");
		 cout<<"The First and Third Step of Program are excuted in the Same Program"<<endl;
		 cout<<"The Output Files are Stored in your Directory";
		 while (inFile >> x)
		 {
		 	numbers[cnt] = x;
		 	cout<< numbers[cnt];
		 	cnt++;
		 }
 
		for (int i = 0; i < 35; ++i)
		{
		   for (int j = i + 1; j < 35; ++j)
		   {
		      if (numbers[i] > numbers[j])
			  {
		         a = numbers[i];
		         numbers[i] = numbers[j];
		         numbers[j] = a;
		      }
		   }
		}
		//sort(numbers, numbers + n);
		sortDataFile.open ("sortData.txt");
		for (int i = 0; i < 35; i++) 
		{
			sortDataFile  << numbers[i];
			if((i+1)%8 != 0) 
			{
				if(i!=34)
				sortDataFile<<setw(9);
			}			
			else sortDataFile <<"\n";
	    }
	    ofstream out1("sortData.txt");
	return 0;
}
