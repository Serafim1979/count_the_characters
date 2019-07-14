#include<iostream>

using std::cout;
using std::cin;
using std::endl;
/////////////////////////////////////////////////////////
unsigned int c_int_str(const char * str, char ch);
/////////////////////////////////////////////////////////
int main()
{
	char mmm[15] = "minimum";

	const char *wail = "uluiate";
	unsigned int ms = c_int_str(mmm, 'm');
	unsigned int us = c_int_str(wail, 'u');

	cout << ms << " m characters in " << mmm << endl;
	cout << us << " u characters in " << wail << endl;

	system("pause");
	return 0;
}
/////////////////////////////////////////////////////////
unsigned int c_int_str(const char * str, char ch)
{
	unsigned int count = 0;
	while (*str)
	{
		if (*str == ch)
			count++;
		str++;
	}
	return count;
}