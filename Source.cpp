#include <iostream>
#include <string>
#include <cctype>
#include <stdlib.h>
#include "Paths.h"
using namespace std;

string answer; 

int main()
{
	Intro();
	if (answer == "a" || answer == "A")
	{
		OpenDoor1();
		if (answer == "a" || answer == "A")
		{
			OpenDoor2();
			if (answer == "a" || answer == "A")
			{
				OpenLeftDoor();
			}

			else if (answer == "b" || answer == "B")
			{
				OpenRightDoor();
			}

			else if (answer == "c" || answer == "C")
			{
				OpenStraightDoor();
			}

			else if (answer == "d" || answer == "D")
			{
				Wait();
			}
			else
			{
				Invalid();
			}
		}
		else if (answer == "b" || answer == "B")
		{
			Wait();
		}

		else
		{
			Invalid();
		}
	}

	else if (answer == "b" || answer == "B")
	{
		Look();
		if (answer == "a" || answer == "A")
		{
			OpenDoor1();
		}

		else if (answer == "b" || answer == "B")
		{
			Keypad();
			if (answer == "a" || answer == "A")
			{
				OpenDoor1();
			}

			else if (answer == "b" || answer == "B")
			{
				Wait();
			}
		}

		else if (answer == "c" || answer == "C")
		{
			Wait();
		}

		else
		{
			Invalid();
		}
	}

	else if (answer == "c" || answer == "C")
	{
		Wait();
	}

	else
	{
		Invalid();
	}
	system("pause");
	return 0;
}
