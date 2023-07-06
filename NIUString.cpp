#include "NIUString.h"


NIUString::NIUString()
{
	arrayPtr = new char;
	arrayPtr[0] = '\0';
}
NIUString::NIUString(const char *s)
{
	arrayPtr = new char[strlen(s)];
	strcpy(arrayPtr, s);
}
NIUString::NIUString(const NIUString &s)
{
	arrayPtr = new char[s.size()];
	strcpy(arrayPtr, s.arrayPtr);
}
NIUString::~NIUString()
{
	delete arrayPtr;
}

NIUString & NIUString:: operator=(const NIUString &s)
{
	if (strcmp(arrayPtr, s.arrayPtr) == 0)
	{
		return *this;
	}
	else
	{
		arrayPtr = new char[s.size()];
		strcpy(arrayPtr, s.arrayPtr);
		return *this;
	}
}
NIUString & NIUString::  operator=(const char *s)
{
	arrayPtr = new char[strlen(s)];
	strcpy(arrayPtr, s);
	return *this;


}
bool operator==(const char *s1, const NIUString &s2)
{
	if (strcmp(s1, s2.arrayPtr) != 0)
		return 0;
	else
		return 1;

}
std::ostream & operator<<(std::ostream &out, const NIUString &s)
{
	out << s.arrayPtr;
	return out;
}

unsigned int NIUString::capacity() const                    //capacity
{
	static unsigned n;
	if (size() > 0)
	{
		n = size();
		size();
	}

	return n;

}
unsigned int NIUString::size() const                         //size {
	return strlen(arrayPtr);
}

bool NIUString::empty() const                               //check empty
{
	if (size() == 0)
		return true;
	else
		return false;

}

void  NIUString::clear()                                    //cleary arrayPtr by placing "" empty string
{
	strCapacity = size();
	strcpy(arrayPtr, "");
	strSize = 0;

}

bool NIUString:: operator==(const NIUString &s) const           //  equality check of letters      s1==s2
{
	if (strcmp(arrayPtr, s.arrayPtr) == 0)
		return true;
	else
		return false;
}
bool NIUString::operator==(const char *s) const                      //equality check to char array  s1=="text"
{
	if (strcmp(arrayPtr, s) == 0)
		return true;
	else
		return false;
}

const char & NIUString:: operator[](unsigned int s) const        
{
	return arrayPtr[s];
}
char & NIUString::operator[](unsigned int s)
{
	return arrayPtr[s];
}

