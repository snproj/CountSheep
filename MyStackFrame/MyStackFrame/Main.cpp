#include <iostream>
#include <string>
using namespace std;



struct stack
{

	int slots;
	string** master;
	string** stackptr;
	string** readptr;

	stack(int num_of_slots)
	{
		slots = num_of_slots + 1;
		master = new string * [slots];
		for (int i = 0; i < slots; i++)
		{
			master[i] = new string;
		}

		stackptr = &master[slots - 1];
		readptr = &master[slots - 1];
	}

};

/*
void bedazzle()
{
	for (int i = 0; i < 10; i++)
	{
		system("color a");
		system("color b");
		system("color c");
		system("color d");
		system("color e");
		system("color f");
		system("color 1");
		system("color 2");
		system("color 3");
		system("color 4");
		system("color 5");
		system("color 6");
		system("color 7");
		system("color 8");
		system("color 9");
	}
}

void bedazzle_ultra()
{
	for (int i = 0; i < 10; i++)
	{
		system("color a9");
		system("color b8");
		system("color c7");
		system("color d6");
		system("color e5");
		system("color f4");
		system("color 13");
		system("color 2a");
		system("color 31");
		system("color 4a");
		system("color 5b");
		system("color 6c");
		system("color 7d");
		system("color 8e");
		system("color 9f");
	}
}
*/

int main()
{

	cout << "Ever wished you could do things like a robot ? Introducing the new Personal Stackframe Simulator <TM>!" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	//bedazzle();


	cout << "Simply type in your current task, and press ENTER to push that task on your stack! \n\n Do the same for any later tasks which come your way! \n \n MyStackFrame will show you nothing but your most recently added task, so you can focus on one thing at a \n time, without having to worry about forgetting what else you had to do!" << endl;
	cout << endl;
	cout << endl;

		//bedazzle();
		//bedazzle();
		//bedazzle();


	cout << "Press ENTER without typing in anything to signify that you're done with a task!" << endl;


		//bedazzle_ultra();

	cout << "\n" << "\n" << "\n" << "\n" << endl;

	cout << "<<<<<   Enter TITLE of stackframe   >>>>>" << endl;
	string title;
	getline(cin, title);

	/*
	system("color a9");
	system("color b8");
	system("color c7");
	system("color d6");
	system("color e5");
	system("color f4");
	system("color 13");
	system("color 2a");
	system("color 31");
	system("color 4a");
	system("color 5b");
	system("color 6c");
	system("color 7d");
	system("color 8e");
	system("color 9f");
	*/

	cout << "<<<<<   Enter SIZE of stack   >>>>>" << endl;
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

	num_of_slots = secretnum;

	stack MyStack(num_of_slots);

	cout << "You have " << MyStack.slots - 1 << " slots in your stack." << endl;



	cout << "Press ENTER to begin." << endl;
	cin.get();
	cin.get();
	system("CLS");
	system("color a");

	while (1)
	{
		std::cout << "_________________________________________________" << std::endl;
		std::cout << title << std::endl;
		std::cout << "_________________________________________________" << std::endl;
		if (MyStack.slots > 1)
		{

			string str;
			//cout << "Next:" << endl;
			getline(cin, str);
			system("CLS");

			if (str == "")
			{
				if (num_of_slots < MyStack.slots)
				{
					cout << "Upwards Access Violation" << endl;
					MyStack.slots -= 1;
					MyStack.stackptr -= 1;
					MyStack.readptr -= 1;
				}
				if (num_of_slots == MyStack.slots)
				{
					cout << **(MyStack.readptr + 1) << endl;

					cout << "\n" << "\n" << "\n" << "\n" << endl;

					cout << "Can't go any higher: Base of stack reached. " << endl;
					string str;
					//cout << "Next:" << endl;
					getline(cin, str);
					system("CLS");
					**(MyStack.stackptr + 1) = str;

					MyStack.slots += 1;
					MyStack.stackptr += 1;
					MyStack.readptr += 1;
				}
				else
				{
					MyStack.slots += 2;
					MyStack.stackptr += 2;
					MyStack.readptr += 2;
				}
			}

			if (str != "")
			{
				**(MyStack.stackptr) = str;
			}
			//cout << "Last thing on the stack was: " << **(MyStack.readptr) << endl;
			cout << **(MyStack.readptr) << endl;

			MyStack.slots -= 1;
			MyStack.stackptr -= 1;
			MyStack.readptr -= 1;

			cout << "\n" << "\n" << "\n" << "\n" << endl;

			cout << MyStack.slots - 1 << " slots left to go." << endl;
		}
		else
		{
			//cout << "That was your last slot!" << endl;
			string str;
			//cout << "Next:" << endl;
			getline(cin, str);
			system("CLS");

			if (str == "")
			{
				MyStack.slots += 1;
				MyStack.stackptr += 1;
				MyStack.readptr += 1;

				//cout << "Last thing on the stack was: " << **(MyStack.readptr + 1) << endl;
				cout << **(MyStack.readptr + 1) << endl;
			}

			if (str != "")
			{
				**(MyStack.stackptr) = str;
				//cout << "Last thing on the stack was: " << **(MyStack.readptr + 1) << endl;
				cout << **(MyStack.readptr + 1) << endl;
			}

			//cout << **(MyStack.readptr) << " with 0 slots left to go." << endl;
			cout << "\n" << "\n" << "\n" << "\n" << endl;
			cout << "No slots left!" << endl;
		}
	}

	/*
	cout << "Hello World!" << endl;

	cin.get();

	cout << "clearing screen" << endl;

	cin.get();

	system("CLS");
	system("color a");

	cin.get();

	cout << "did the screen clear?" << endl;

	cin.get();
	*/
}