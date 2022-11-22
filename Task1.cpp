#include<iostream>;
using namespace std;
class MyNum
{
private:
	int num;
public:
	MyNum(int Num = 0) {}
	void set(int Num)
	{
		num = Num;
	}
	void get()
	{
		cout << "The Orignal Number is: " << num << endl;
		if (num < 0)
		{
			cout << "The Number is Already in Negative Form: " << num << endl;
			num = num * -1;
			cout << "Convert Number in Possitive Form: " << num << endl;
		}
		else
		{
			cout << "The Number is Already in Possitive Form: " << num << endl;
			num = num * -1;
			cout << "Convert Number in Negative Form: " << num << endl;
		}
	}
};
int main()
{
	int num = 0;
	cout << "Enter a Number: ";
	cin >> num;
	MyNum obj(0), obj2(0), obj3(0);
	obj.set(num);
	obj.get();

	cout << endl << "Now Enter Number for 2nd Object" << endl;
	cout << "Enter a Number: ";
	cin >> num;
	obj2.set(num);
	obj2.get();

	cout << endl << "Now Enter Number for 3rd Object" << endl;
	cout << "Enter a Number: ";
	cin >> num;
	obj3.set(num);
	obj3.get();
	return 0;
}