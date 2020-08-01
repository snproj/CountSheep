#include <iostream>
#include <string>
using namespace std;



struct stack
{

	int slots;
	string** master;
	string** stackptr;

	stack(int num_of_slots)
	{
		slots = num_of_slots + 1;
		master = new string* [slots];
		for (int i = 0; i < slots; i++)
		{
			master[i] = new string;
		}

		stackptr = &master[slots - 1];
	}

};

int main()
{
	cout << "Enter title of stackframe" << endl;
	string title;
	getline(cin, title);

	cout << "Enter size of stack." << endl;
	int num_of_slots;
	string secretstring;
	cin >> (secretstring);
	int secretnum = 100;

	try
	{
		secretnum = stoi(secretstring);
	}
	catch (invalid_argument)
	{
		cout << "INVALID ARGUMENT --- DEFAULT 100 SLOTS" << endl;
	}
	catch (out_of_range)
	{
		cout << "INTEGER OVERFLOW --- DEFAULT 100 SLOTS" << endl;
	}

	if (secretnum < 2)
	{
		cout << "MUST BE AT LEAST 2 DUMMY --- DEFAULT 100 SLOTS LOLOLOLOLOLOLOLOLOLOLOLOLOLOLOLOLOLOLOL" << endl;
		secretnum = 100;
	}

	num_of_slots = secretnum - 1;

	stack MyStack(num_of_slots);

	cout << "You have " << MyStack.slots << " slots in your stack." << endl;



	cout << "Press any key to begin." << endl;
	cin.get();
	cin.get();
	system("CLS");
	system("color a");

	while (1)
	{
		std::cout << title << std::endl;
		if (MyStack.slots > 1)
		{

			string str;
			cout << "Please enter stored value" << endl;
			getline(cin, str);
			system("CLS");

			if (str == "done")
			{
				if (num_of_slots < MyStack.slots)
				{
					cout << "Upwards Access Violation" << endl;
					MyStack.slots -= 1;
					MyStack.stackptr -= 1;
				}
				if (num_of_slots == MyStack.slots)
				{
					cout << "Base of stack was: " << **(MyStack.stackptr + 1) << endl;
					cout << "Nothing upwards on the stack." << endl;
					string str;
					cout << "Please enter stored value" << endl;
					getline(cin, str);
					system("CLS");
					**(MyStack.stackptr + 1) = str;

					MyStack.slots += 1;
					MyStack.stackptr += 1;
				}
				else
				{
					MyStack.slots += 2;
					MyStack.stackptr += 2;
				}
			}

			if (str != "done")
			{
				**(MyStack.stackptr) = str;
			}
			cout << "Last thing on the stack was: " << **(MyStack.stackptr) << endl;

			MyStack.slots -= 1;
			MyStack.stackptr -= 1;
			cout << "Stackptr currently pointing to slot " << MyStack.slots << ": " << **(MyStack.stackptr) << " with " << MyStack.slots - 1 << " slots left to go." << endl;
		}
		else
		{
			cout << "This is your last slot." << endl;
			string str;
			cout << "Please enter stored value" << endl;
			getline(cin, str);
			system("CLS");

			if (str == "done")
			{
				MyStack.slots += 1;
				MyStack.stackptr += 1;
			}

			if (str != "done")
			{
				**(MyStack.stackptr) = str;
			}
			cout << "Stackptr currently pointing to slot " << MyStack.slots << ": " << **(MyStack.stackptr) << " with " << MyStack.slots - 1 << " slots left to go." << endl;
		}
	}

	cout << "Hello World!" << endl;

	cin.get();

	cout << "clearing screen" << endl;

	cin.get();

	system("CLS");
	system("color a");

	cin.get();

	cout << "did the screen clear?" << endl;

	cin.get();
}