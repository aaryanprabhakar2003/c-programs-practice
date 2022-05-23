#include <iostream>
using namespace std;
/*int main()
{
int x = -1;

// Some code
cout << "Before try \n";
try {
	cout << "Inside try \n";
	if (x < 0)
	{
		throw x;
		cout << "After throw (Never executed) \n";
	}
}
catch (int x ) {
	cout << "Exception Caught \n";
}
cout << "After catch (Will be executed) \n";
return 0;
}*/
//----------------------------------------------------------------
/*int main()
{
	try {
	throw 10;
	}
	catch (char *excp) {
		cout << "Caught " << excp;
	}
	catch (...) {
		cout << "Default Exception\n";
	}
	return 0;
}*/
//----------------------------------------------------------------
int main()
{
	try {
	throw 'a';
	}
	catch (int x) {
		cout << "Caught " << x;
	}
	catch (...) {
		cout << "Default Exception\n";
	}
	return 0;
}



