	#include <iostream>
	#include "Mathy_stuff.h"
	#include <stdlib.h>
	#include <chrono>
	#include <thread>
	#include <time.h>

	void prime_handler(bool is_not_prime)
	{
		if (is_not_prime == 0)
		{
			std::cout << "A PRIME FLUFFY BOI!!!";
		}
	}

	void basic_count(int x, bool& is_not_prime)
	{

		std::cout << "COUNT OF SHEEP: " << x << std::endl;

		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	}

	void every_five_count(int x, bool& is_not_prime)
	{

		if (x % 5 == 0)
		{
			is_not_prime = 1;
			std::cout << "By the laws of physics, ";
		}

	}

	void every_two_count(int x, bool& is_not_prime)
	{

		if (x % 2 == 0)
		{
			is_not_prime = 1;
			std::cout << "Booga looga. An even number. ";
		}
	}

	void every_three_count(int x, bool& is_not_prime)
	{

		if (x % 3 == 0)
		{
			is_not_prime = 1;
			std::cout << "OMIGOSH! ";
		}
	}

	void every_four_count(int x, bool& is_not_prime)
	{

		if (x % 4 == 0)
		{
			is_not_prime = 1;
			std::cout << "HEYA! ";
		}
	}

	void every_eight_count(int x, bool& is_not_prime)
	{

		if (x % 8 == 0)
		{
			is_not_prime = 1;
			std::cout << "OHOHO! ";
		}
	}

	void every_six_count(int x, bool& is_not_prime)
	{

		if (x % 6 == 0)
		{
			is_not_prime = 1;
			std::cout << "Well, well, well... ";
		}
	}

	void every_nine_count(int x, bool& is_not_prime)
	{

		if (x % 9 == 0)
		{
			is_not_prime = 1;
			std::cout << "Amazing! ";
		}
	}

	void every_seven_count(int x, bool& is_not_prime)
	{

		if (x % 7 == 0)
		{
			is_not_prime = 1;
			std::cout << "PANKACES PANCAKED PANCAKES!!!!!!!!!!! ";
		}
	}

	void every_ten_count(int x, bool& is_not_prime)
	{

		if (x % 10 == 0)
		{
			is_not_prime = 1;
			std::cout << "Epic milestone! ";
		}
	}

	void every_hundred_count(int x, bool& is_not_prime)
	{

		if (x % 100 == 0)
		{
			is_not_prime = 1;
			std::cout << "Your sheep counting skills are legendary. ";
		}
	
	}

	void bonus_count(int x, int& cookies)
	{
		if ((rand() % 50) % 23 == 0)
		{
			std::cout << "Bonus points!!! 5 bonus cookiez for you. ";
			cookies += 5;
		}
	}

	void epic_bonus_count(int x, int& cookies)
	{
		if ((rand() % 100) % 37 == 0)
		{
			std::cout << "OMG EPIC BONUS OF 100 COOKIEZ!!! ";
			cookies += 100;
		}
	}

	void epic_picture(int x)
	{
		bool is_div_by_2 = 0;
		bool is_div_by_3 = 0;
		bool is_div_by_5 = 0;
		bool is_div_by_7 = 0;
		bool is_div_by_100 = 0;

		if (x % 100 == 0)
		{
			is_div_by_100 = 1;

			std::cout << std::endl;
			
			std::cout << "                                                              o" << std::endl;
			std::cout << "                                                            o%" << std::endl;
			std::cout << "                                                           //" << std::endl;
			std::cout << "                                                      -=\"~\\ " << std::endl;
			std::cout << "                                                        ~\\\\\\ " << std::endl;
			std::cout << "                                                          \\\\\\ " << std::endl;
			std::cout << "                                                           \\\\\\ " << std::endl;
			std::cout << "                                                            );\\ " << std::endl;
			std::cout << "                                                           /|;;\\ " << std::endl;
			std::cout << "                                                       \"\";;;;;;; \\ " << std::endl;
			std::cout << "                                                ///\"\"\"\"\"\"\"\";;;;;;\\ " << std::endl;
			std::cout << "                                    ___////+++++\"\"\"\"\"\"\"\"\"\"\"\" ;;; @@\\ " << std::endl;
			std::cout << "                      __________///////++++++++++++++\"\"\"\"\"\"\"\"@@@@%)" << std::endl;
			std::cout << "           ....__/0)///0)//0)//0)/++////////++++++++++\"\" @@@ % %%%%/ " << std::endl;
			std::cout << "     ..---0)/--------////////////////+++++++/////+++++@@%%%%%%%/" << std::endl;
			std::cout << "      ..///---0)---0)///0)//0)///0)/////////+++++====@%%%%%%/" << std::endl;
			std::cout << "   ...0)....//----///------////////////+++++///      \\/\\\\//" << std::endl;
			std::cout << "      //../0)--0)///0)///0)///0)//++++/////          /  \\/" << std::endl;
			std::cout << "      --///--------///////////+++/////             _/   /" << std::endl;
			std::cout << ".-//..0).-/0)--0)--0)--0)--..                      /\\  /" << std::endl;
			std::cout << "       .......--/////////.                            /\\_" << std::endl;
			std::cout << "            .0)..0).." << std::endl;

			std::cout << std::endl;
			std::cout << std::endl;

			std::cout << "Adapted from: Unknown Artist" << std::endl;

			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
		}

		if (x % 7 == 0 && is_div_by_100 != 1)
		{
			is_div_by_7 = 1;

			std::cout << std::endl;

			std::cout << "        .------." << std::endl;
			std::cout << "       /  ~ ~   \,------.      ______" << std::endl;
			std::cout << "     ,'  ~ ~ ~  /  (@)   \\   ,'      \\ " << std::endl;
			std::cout << "   ,'          /`.    ~ ~ \\ /         \\ " << std::endl;
			std::cout << " ,'           | ,'\\  ~ ~ ~ X     \\  \\  \\ " << std::endl;
			std::cout << "'  ,'          V--<       (       \\  \\  \\ " << std::endl;
			std::cout << " ,'               (vv      \\/\\  \\  \\  |  |" << std::endl;
			std::cout << "'  ,'   /         (vv   \"\"    \\  \\  | |  |" << std::endl;
			std::cout << "_,'    /   /       vv   \"\"\"    \\ |  / / / " << std::endl;
			std::cout << "  \\__,'   /  |     vv          / / / / /" << std::endl;
			std::cout << "      \\__/   / |  | \\         / /,',','" << std::endl;
			std::cout << "         \\__/\\_^  |  \\       /,'',','\\ " << std::endl;
			std::cout << "                `-^.__>.____/  ' ,'   \\ " << std::endl;
			std::cout << "      ===============(((((((=================" << std::endl;
			std::cout << "      from Lauren Nowlin         | \\ \\  \ " << std::endl;
			std::cout << "                                 / |  |  \\ " << std::endl;
			std::cout << "                                / /  / \\  \\ " << std::endl;
			std::cout << "                                `.     |   \\ " << std::endl;

			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;

			std::cout << "Adapted from: Lauren Nowlin" << std::endl;

			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
		}

		if (x % 5 == 0 && is_div_by_100 != 1 && is_div_by_7 != 1)
		{
			is_div_by_5 = 1;

			std::cout << std::endl;

			std::cout << "      ,~." << std::endl;
			std::cout << "   ,-'__ `-," << std::endl;
			std::cout << "  {,-'  `. }              ,')" << std::endl;
			std::cout << " ,( a )   `-.__         ,',')~," << std::endl;
			std::cout << "<=.) (         `-.__,==' ' ' '}" << std::endl;
			std::cout << "  (   )                      /" << std::endl;
			std::cout << "   `-'\\   ,                  )" << std::endl;
			std::cout << "       |  \\        `~.      /" << std::endl;
			std::cout << "       \\   `._        \    /" << std::endl;
			std::cout << "        \\     `._____,'   /" << std::endl;
			std::cout << "         `-.            ,'" << std::endl;
			std::cout << "            `-.      ,-'" << std::endl;
			std::cout << "               `~~~~'" << std::endl;
			std::cout << "               //_||" << std::endl;
			std::cout << "            __//--'/`   hjw" << std::endl;
			std::cout << "          ,--'/`  '" << std::endl;
			std::cout << "             '" << std::endl;

			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;

			std::cout << "Adapted from: hjw" << std::endl;

			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
		}

		if (x % 3 == 0 && is_div_by_100 != 1 && is_div_by_7 != 1 && is_div_by_5 != 1)
		{
			is_div_by_3 = 1;

			std::cout << std::endl;
			
			std::cout << "      _.-." << std::endl;
			std::cout << " __.-' ,  \\ " << std::endl;
			std::cout << "'--'-'._   \\ " << std::endl;
			std::cout << "        '.  \\ " << std::endl;
			std::cout << "         )-- \\ __.--._" << std::endl;
			std::cout << "        /   .'        '--." << std::endl;
			std::cout << "       .               _/-._" << std::endl;
			std::cout << "       :       ____._/   _-'" << std::endl;
			std::cout << "        '._          _.'-'" << std::endl;
			std::cout << "           '-._    _.'" << std::endl;
			std::cout << "               \\_|/" << std::endl;
			std::cout << "              __|||" << std::endl;
			std::cout << " snd          >__/'" << std::endl;

			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;

			std::cout << "Adapted from: Shakana Dias" << std::endl;

			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;

		}

		if (x % 2 == 0 && is_div_by_100 != 1 && is_div_by_7 != 1 && is_div_by_5 != 1 && is_div_by_3 != 1)
		{
			is_div_by_2 = 1;

			std::cout << std::endl;

			std::cout << "      _...._" << std::endl;
			std::cout << "    /       \\ " << std::endl;
			std::cout << "   /  o _ o" << std::endl;
			std::cout << "   (    \\/  )" << std::endl;
			std::cout << "  )          (" << std::endl;
			std::cout << "(    -  -  -  )" << std::endl;
			std::cout << "(             )" << std::endl;
			std::cout << " (            )" << std::endl;
			std::cout << "  [          ]" << std::endl;
			std::cout << "---/l\\    /l\\--------" << std::endl;

			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;

			std::cout << "Adapted from: Unknown Artist" << std::endl;

			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
		}

		if (is_div_by_100 != 1 && is_div_by_7 != 1 && is_div_by_5 != 1 && is_div_by_3 != 1 && is_div_by_2 != 1)
		{
			std::cout << std::endl;

			std::cout << " /L/\\ " << std::endl;
			std::cout << "_\\   \\_" << std::endl;
			std::cout << "\\      )  _,    ,,_" << std::endl;
			std::cout << "_|    (  ( 9`> < 6 ) _ __" << std::endl;
			std::cout << "\\_     \\__) (__,) (_ )' /" << std::endl;
			std::cout << "  \\_    _)   \\-/  / `-,(_" << std::endl;
			std::cout << "    `--'Z    /`\\_ `,___,/" << std::endl;
			std::cout << "       /(__,/    ))/" << std::endl;
			std::cout << "      /  \\((_   /`/`" << std::endl;
			std::cout << "     /   |\\`\\ " << std::endl;
			std::cout << "     `-^-'" << std::endl;
			std::cout << "               mic" << std::endl;

			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;

			std::cout << "Adapted from: Peace and love by Mic Barendez" << std::endl;

			std::cout << std::endl;

			std::cout << "Prime numbers cannot be divided! uwu" << std::endl;

			std::cout << std::endl;
		}

	}

	void x_advancer(int& x, time_t& timer)
	{
		time(&timer);

		int weird_hash = hash3(x, x % 3, timer);

		srand(weird_hash);

		if (rand() % 2)
		{
			x += 2;
		}
		else if (rand() % 3)
		{
			x += 3;
		}
		else
		{
			x += 1;
		}
	}

	void color_changer(int x, time_t& timer)
	{
		time(&timer);

		int weird_hash = hash3(x, x % 3, timer);

		srand(weird_hash);

		int val = rand() % 14;

		switch (val)
		{
		case 0:
			system("color 1");
			break;
		case 1:
			system("color 2");
			break;
		case 2:
			system("color 3");
			break;
		case 3:
			system("color 4");
			break;
		case 4:
			system("color 5");
			break;
		case 5:
			system("color 6");
			break;
		case 6:
			system("color 7");
			break;
		case 7:
			system("color 8");
			break;
		case 8:
			system("color 9");
			break;
		case 9:
			system("color a");
			break;
		case 10:
			system("color b");
			break;
		case 11:
			system("color c");
			break;
		case 12:
			system("color d");
			break;
		case 13:
			system("color e");
			break;
		case 14:
			system("color f");
			break;
		};
	}

	void normal_loop_routine(int& x, int& cookies, bool is_not_prime, time_t timer)
	{
		
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));

		system("cls");
		//color_changer(x, timer);

		basic_count(x, is_not_prime);
		every_two_count(x, is_not_prime);
		every_three_count(x, is_not_prime);
		every_four_count(x, is_not_prime);
		every_five_count(x, is_not_prime);
		every_six_count(x, is_not_prime);
		every_seven_count(x, is_not_prime);
		every_eight_count(x, is_not_prime);
		every_nine_count(x, is_not_prime);
		every_ten_count(x, is_not_prime);
		every_hundred_count(x, is_not_prime);

		if (x == 0)
		{
			std::cout << "Soon you will have more sheep and cookiez!";
		}

		if (x == 1)
		{
			std::cout << "Let's begin your counting journey! ";
		}

		prime_handler(is_not_prime);

		bonus_count(x, cookies);
		epic_bonus_count(x, cookies);

		epic_picture(x);

		cookies += 1;
		std::cout << "YOU GOT 1 MOAR COOKIEZ!!! ";

		x_advancer(x, timer);

		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "COOKIEZ IS: " << cookies << std::endl;

		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "--- The true question is: Are we counting cookiez, or sheep, or neither? ---";
	}

	int main()
	{
		system("mode con: cols=200 lines=78");

		bool is_not_prime = 0;

		int x = 0;
		int cookies = 0;

		time_t timer = 0;

		while (1)
		{
			normal_loop_routine(x, cookies, is_not_prime, timer);
		}
	}