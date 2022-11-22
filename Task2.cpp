#include<iostream>;
using namespace std;
class MyChar
{
private:
	char ch;
public:
	MyChar(char Ch = '/0'){}
	void set(char Ch)
	{
		ch = Ch;
	}
	void get()
	{
		cout << "The Orignal Charcter is: " << ch << endl;
		if (ch >= 'a' && ch <= 'z')
		{
			cout << "The Charcter is Already in LowerCase case: " << ch << endl;
			ch = char(ch - 32);
			cout << "Convert charcter in UpperCase case: " << ch << endl;
		}
		else
		{
			cout << "The Charcter is Already in UpperCase case: " << ch << endl;
			ch = char(ch + 32);
			cout << "Convert charcter in LowerCase Case: " << ch << endl;
		}
	}
};
int main()
{
	char ch = '/0';
	cout << "Enter a Charcter: ";
	cin >> ch;
	MyChar obj('/0'), obj2('/0'), obj3('/0');
	obj.set(ch);
	obj.get();

	cout << endl <<  "Now Enter Charcter for 2nd Object" << endl;
	cout << "Enter a Charcter: ";
	cin >> ch;
	obj2.set(ch);
	obj2.get();

	cout << endl << "Now Enter Charcter for 3rd Object" << endl;
	cout << "Enter a Charcter: ";
	cin >> ch;
	obj3.set(ch);
	obj3.get();
	return 0;
}