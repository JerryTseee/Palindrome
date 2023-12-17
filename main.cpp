#include<iostream>
#include<string>
using namespace std;

int main()
{
	string first;
	getline(cin, first);//get the one line input
	int length = first.length();
	for (int i = 0; i < length; i++)
	{
		if (first[i] >= 'a' && first[i] <= 'z')
		{
			continue;
		}
		else if (first[i] >= 'A' && first[i] <= 'Z')
		{
		  first[i]=tolower(first[i]);//change all the upper letter to lower letter, better for comparison
			continue;
		}
		else
		{
			first.erase(i, 1);//erase all the garbage values
			length--;//update the length
			i--;//update the i
		}
	}
	
	int len = first.length();
	for (int i = 0; i < len; i++)
	{
		if (first[i] != first[len - i - 1])
		{
			cout << "The input string is not a palindrome." << endl;//found one not match, then directly end the program
			return 0;
		}
	}
	cout << "The input string is a palindrome." << endl;//check all the characters, not found, then return it is palindrome
	return 0;
}
