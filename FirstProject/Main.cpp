#include <iostream>
#include <string>
#include "BasicIOLib.h"

/*
void make1_Thing()
{
	Thing::Thing();
}

*/

class Thing
{
private:
	int var = 3;
	Thing* t;

public:
	void change_var(int amt)
	{
		var += amt;
	}
	
	void print_var()
	{
		std::cout << "printing" << var << std::endl;
		std::cin.get();
	}

	Thing(int x)
	{
		var = x;
		print_var();
		delete_self();
	}

	static void make_Thing()
	{
		Thing(2);
	}

	void delete_self()
	{
		std::cout << "DELETED1" << std::endl;
		print_var();
		std::cout << &var << std::endl;
		delete this;
		std::cout << "DELETED2" << std::endl;
		std::cin.get();
		print_var(); //undefined behaviour since instance is already deleted by this point; i.e. var no longer exists
	}
};

class UrThing
{
public:
	void make2_Thing(int x)
	{
		Thing* t = new Thing(x);
	}
};


int main(){

	UrThing urthing;
	urthing.make2_Thing(4);

	/*
	Thing thing;
	thing.change_var(4);
	thing.print_var();

	std::cout << "before" << std::endl;

	thing.make_Thing();

	std::cout << "after" << std::endl;

	*/

	std::string GlobalVersion = "2";
	printVersionMarker(GlobalVersion);

	urthing.make2_Thing(9);

	return 0;
}