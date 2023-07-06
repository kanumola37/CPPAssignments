#include <iostream>
#include <cctype>
using namespace std;
int getFinalNumber(int number)
{
    int tSum = 0;
    while(number > 9 && number != 11&& number != 12&& number != 22)
    {
        while(number != 0)
        {
            tSum = tSum +(number%10);
            number = number/10;
            cout<<"\n";
        }
        number=tSum;
       tSum = 0;
    }
    if(number == 0|| number == 1|| number == 2||number == 3|| number == 4|| number == 5||
    number == 6|| number == 7|| number == 8||number ==9|| number == 11|| number == 12|| number == 22)
    {
        tSum =  number;
    }
    return tSum;
}
int getNameNumber(string name)
{
 int sum = 0;   
  for (int i = 0; i < name.length(); i++) {
    if(isalpha(name.at(i)))
        {
            sum    = sum +((char)tolower(name.at(i))-'a')+1; // Converting the characters into Lower Case if we Enter the capital letter
        } 
    else if(isdigit(name.at(i)))
    {
        sum = sum + (int)name.at(i)-48; // Substracting the Final number with -48 and getting the final output
    }
    }
    return sum;
}
void printNumerology(int num)
{cout<<"That name has the traits ";
    switch(num)
    {
        case 0 : cout<<"emptiness, nothingness, blank";
        break;
        case 1 : cout<<"independence, loneliness, creativity, originality, dominance, leadership, impatience";
        break;
        case 2 : cout<<"quiet, passive, diplomatic, co¬operation, comforting, soothing, intuitive, compromising, patient";
        break;
        case 3 : cout<<"charming, outgoing, self expressive, extroverted, abundance, active, energetic, proud";
        break;
        case 4 : cout<<"harmony, truth, justice, order discipline, practicality";
        break;
        case 5 : cout<<"new directions, excitement, change, adventure";
        break;
        case 6 : cout<<"love, harmony, perfection, marriage, tolerance, public service";
        break;
        case 7 : cout<<"spirituality, completeness, isolation, introspection";
        break;
        case 8 : cout<<"organization, business, commerce, new beginnings";
        break;
        case 9: cout<<"romantic, rebellious, determined, passionate, compassionate";
        break;
        case 11: cout<<"idealism, visionary, inspirational";
        break;
        case 12: cout<<"perfectionist, discriminating";
        break;
        case 22 : cout<<"builder, leader, humanitarian, practical, honest";
        break;
    }
}
int main()
{
    char name[80]; //Reading the names into the cstring array in the version of Assignment 2B
    string choice="y"; // Used the choice variable with string for default
    cout<<"Numerology Pgm Starting:\n";
    while(choice[0] == 'y'|| choice[0]=='Y')
    {
      cout<<"Enter the Name:";
      cin.getline (name,80);
      int totalNumber = getNameNumber(name); // Converting the Name into the number and calling the function to get the Number
      int FinalNumber = getFinalNumber(totalNumber); // Converting the number into single digit
      printNumerology(FinalNumber); //printing the final number and Verifying with the choice and printing the result
      cout<<"\ndiscriminating Another?(y/n)";
      getline(cin,choice);
    }
    return 0;
}
