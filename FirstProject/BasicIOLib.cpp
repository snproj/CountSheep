#include <iostream>
#include <string>



void printVersionMarker()
{
}

void printHelloWorld(std::string version) {

	version = "10";
	std::cout << "Hello World" << std::endl;
	std::cin.get();

}

void printVersionMarker(std::string version) {

	std::cout << "Version is: " << version << std::endl;

	printHelloWorld(version);

	std::cout << "Version is: " << version << std::endl;

}

void printInputMessage(std::string message) {

	std::cout << message << std::endl;
	std::cin.get();

}

std::string getInput() {

	std::cout << "Please input a string." << std::endl;

	std::string input;
	std::cin >> input;
	return input;

}