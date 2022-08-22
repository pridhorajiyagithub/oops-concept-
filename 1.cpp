#include<iostream>
#include<string.h>
using namespace std;
// addition of 3 number using class object
class Sum
{
	public:
	int a;
	int b;
	int c;
	
};

int main()
{
	Sum d;
	int add;
	cout << "enter any 3 value:: " << endl;
	cin >> d.a >> d.b >> d.c;
	
	add = d.a + d.b + d.c;
	
	cout << "sum = " << add;
	
}
