#include "NIUString.h"
int main()
{
	cout << "Starting driver, and testing default constructor for s1\n\n";
	const  NIUString s1;
	cout << "s1: " << s1 << endl;
	cout << "s1 size: " << s1.size() << endl;
	cout << "s1 capacity: " << s1.capacity() << endl;
	cout << "s1 is " << ((s1.empty()) ? "empty\n" : "not empty\n");

	cout << "Testing second constructor with s2\n\n";

	NIUString s2 = "some text";

	cout << "s2: " << s2 << endl;
	cout << "s2 size: " << s2.size() << endl;
	cout << "s2 capacity: " << s2.capacity() << endl;
	cout << "s2 is " << ((s2.empty()) ? "empty\n" : "not empty\n");

	cout << "Testing second constructor with long string\n\n";

	NIUString s3 = "This is a really long string, but all of it will still end up in the array - pretty neat, huh?";

	cout << "s3: " << s3 << endl;
	cout << "s3 size: " << s3.size() << endl;
	cout << "s3 capacity: " << s3.capacity() << endl;
	cout << endl;

	cout << "Testing  subscript overload for non constant NIUString s2, s and t should be uppercase now\n\n";

	s2[0] = 'S';
	s2[5] = 'T';
	cout << "s2: " << s2 << endl << endl;

	const NIUString s2B = "These letters are in a constant object";    //call  constructor that gets values from a char array
	cout << "Testing subscript overload of constant NIUString  \n\n";

	cout << "s2B: ";
	for (size_t i = 0; i < s2B.size(); i++)
		cout << s2B[i];
	cout << endl << endl;

	cout << "Testing equality operators\n\n";

	const NIUString s4 = "Some Text";

	cout << "s2 and s4 are " << ((s2 == s4) ? "equal\n" : "not equal\n");  //equal  Some Text
	cout << "s3 and s4 are " << ((s3 == s4) ? "equal\n" : "not equal\n\n"); //not equal

	cout << "s4 and \"Some Text\" are " << ((s4 == "Some Text") ? "equal\n" : "not equal\n");  //equal
	cout << "s4 and \"More Text\" are " << ((s4 == "More Text") ? "equal\n" : "not equal\n\n");  //not equal

	cout << "\"Some Text\" and s4 are " << (("Some Text" == s4) ? "equal\n" : "not equal\n");  //equal
	cout << "\"More Text\" and s4 are " << (("More Text" == s4) ? "equal\n" : "not equal\n\n");  //not equal

	cout << "Testing clear() method\n\n";

	s3.clear();

	cout << "s3: " << s3 << endl;
	cout << "s3 size: " << s3.size() << endl;
	cout << "s3 capacity: " << s3.capacity() << endl;
	cout << "s3 is " << ((s3.empty()) ? "empty\n" : "not empty\n");
	cout << endl;

	cout << "Testing copy constructor\n\n";

	NIUString s5(s4);  //call copy constructor to copy s4 into s5

	cout << "s5: " << s5 << endl;
	cout << "s5 size: " << s5.size() << endl;
	cout << "s5 capacity: " << s5.capacity() << endl;
	cout << endl;

	cout << "Testing assignment operator\n\n";
	cout << "***** in assignment = with niustring object on right side *****" << endl << endl;
	s3 = s5;   //assigning an NIUString object on right

	cout << "s3: " << s3 << endl;
	cout << "s3 size: " << s3.size() << endl;
	cout << "s3 capacity: " << s3.capacity() << endl;
	cout << endl;

	cout << "in assignment = with a c string as right operand" << endl;
	s3 = "a different string";  //assigning a char array on right

	cout << "s3: " << s3 << endl;
	cout << "s3 size: " << s3.size() << endl;
	cout << "s3 capacity: " << s3.capacity() << endl;
	cout << endl;

	cout << "Testing self-assignment\n\n";
	cout << "***** in assignment = with niustring obj on right side *****" << endl << endl;
	s3 = s3;

	cout << "s3: " << s3 << endl;
	cout << "s3 size: " << s3.size() << endl;
	cout << "s3 capacity: " << s3.capacity() << endl;
	cout << endl;

	cout << "Testing chained assignment\n\n";
	cout << "in assignment = with a c string as right operand" << endl;

	cout << "***** in assignment = with niustring obj on right side *****" << endl << endl;
	s3 = s2 = "Hello, world";

	cout << "s2: " << s2 << endl;
	cout << "s2 size: " << s2.size() << endl;
	cout << "s2 capacity: " << s2.capacity() << endl;
	cout << endl;

	cout << "s3: " << s3 << endl;
	cout << "s3 size: " << s3.size() << endl;
	cout << "s3 capacity: " << s3.capacity() << endl;
	cout << endl;

}

