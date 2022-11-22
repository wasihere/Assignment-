#include<iostream>;
using namespace std;
class Name
{
private:
	char* firstname;
	char* lastname;
public:
	Name(char* firstname = nullptr, char* lastname = nullptr){}
	void copyname(char* Firstname, char* Lastname)
	{
		firstname = Firstname;
		lastname = Lastname;
	}
	void camelCase()
	{
		for (int i = 0; i < 1; i++)
		{
			if (firstname[i] >= 'A' && firstname[i] <= 'Z')
			{
				cout << "The 1st Latter of 1stName is already in Capital= " <<  firstname[i] << endl;
			}
			else
			{
				firstname[i] = char(firstname[i] - 32);
				cout << "The 1st Latter of 1stName is converted in Capital= " << firstname[i] << endl;
			}
		}

		for (int i = 0; i < 1; i++)
		{
			if (lastname[i] >= 'A' && lastname[i] <= 'Z')
			{
				cout << "The 1st Latter of 1stName is already in Capital= " << lastname[i] << endl;
			}
			else
			{
				lastname[i] = char(lastname[i] - 32);
				cout << "The 1st Latter of lastname is converted in Capital= " << lastname[i] << endl;
			}
		}
	}

	void toLower(char* Firstname, char* Lastname)
	{
		firstname = Firstname;
		lastname = Lastname;
		cout << endl << "First Name Before Converted: " << firstname << endl;
		for (int i = 0; firstname[i] != '\0'; i++)
		{
			if (firstname[i] >= 'A' && firstname[i] <= 'Z')
			{
				firstname[i] = firstname[i];
			}
			else
			{
				firstname[i] = char(firstname[i] - 32);
			}
		}
		cout << "First Name After Converted: " << firstname << endl;
		cout << endl << "Last Name Before Converted: " << lastname << endl;
		for (int i = 0;  lastname[i] != '\0'; i++)
		{
			if (lastname[i] >= 'A' && lastname[i] <= 'Z')
			{
				lastname[i] = lastname[i];
			}
			else
			{
				lastname[i] = char(lastname[i] - 32);
			}
		}
		cout << "Last Name After Converted: " << lastname << endl;
	}
	void nameLenght(int count)
	{
		for (int i = 0; firstname[i] != '\0'; i++)
		{
			count++;
		}
		for (int i = 0; lastname[i] != '\0'; i++)
		{
			count++;
		}
		cout << "Length of Both Names: " << count << endl;
	}
	void swapNames()
	{
		cout << "Names After Swaping" << endl;
		cout << "First Name: " << lastname << endl;
		for (int i = 0; firstname[i] != '\0'; i++)
		{
			lastname[i] = firstname[i];
		}
		 
		cout << "Last Name: ";
		for (int i = 0; firstname[i] != '\0'; i++)
		{
			cout << lastname[i];
		}
		cout << endl;
	}
	char* fullName(char* fname,int count)
	{
		for (int i = 0; firstname[i] != '\0'; i++)
		{
			fname[count] = firstname[count];
			count++;
		}
		for (int i = 0; lastname[i] != '\0'; i++)
		{
			fname[count] = lastname[count];
			count++;
		}
		cout << endl;
		return fname;
	}
	void nameCompare(char* Firstname, char* Lastname,int count)
	{
		firstname = Firstname;
		lastname = Lastname;
		for (int i = 0; i < 30; i++)
		{
			if (firstname[i] == lastname[i])
			{
				count = 0;
			}
			else
			{
				cout << "Both the Names are not Equal" << endl;
				i = 30;
			}
		}
		if (count == 0)
		{
			cout << "Both the Names are Equal" << endl;
		}
	}

};
int main()
{
	const int size = 30;
	char* firstname = new char[size];
	char* lastname = new char[size];
	char* fname = new char[size];
	cout << "Enter first Name: ";
	cin.getline(firstname, size);
	cout << "Enter lastname Name: ";
	cin.getline(lastname, size);
	Name obj(nullptr, nullptr);
	obj.copyname(firstname, lastname);
	obj.camelCase();
	obj.toLower(firstname, lastname);
	obj.nameLenght(0);
	obj.swapNames();
	obj.fullName(fname, 30);
	obj.nameCompare(firstname, lastname,0);
	return 0;
}