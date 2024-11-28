#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course 4 Solution 6 
// Full Name.

struct stInfo
{
	string FirstName;
	string LastName;
};

stInfo ReadInfo()
{
	stInfo Info;

	cout << "Please Enter Your First Name" << endl;
	cin >> Info.FirstName;

	cout << "Please Enter Your Last Name" << endl;
	cin >> Info.LastName;

	return Info;
}

string GetFullName(stInfo Info, bool Reversed)
{
	string FullName="";
	if(Reversed)
		FullName = Info.LastName + " " + Info.FirstName;
	else
	FullName = Info.FirstName + " " + Info.LastName;
	return FullName;
}

void PrintFullName(string FullName)
{
	cout << "\n Your name is :" << FullName << endl;
}


int main()
{
	PrintFullName(GetFullName(ReadInfo(),false));
	return 0;
}

