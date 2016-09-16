#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	

	char arr[1000];
	cin.get(arr,1000,'^');
	ofstream hey;
	hey.open ("home.cpp");
	hey<<arr ;
	hey.close();
	system("g++ home.cpp");
	system("a.exe");
	
}
