#include <iostream>
#include <string>
#include "Paths.h"
using namespace std;
void Invalid(int error);
string answer; 

int main()
{

	Paths path;

	
	//Plays the introduction
	path.Intro();

	//The entirety of Source.cpp takes the user's answer from Paths.cpp and applies it to the large decision tree laid out here.
	//Source.cpp is no more than a bunch of if's, then's, and else's.
	try
	{
		if (answer == "a" || answer == "A")
		{
			path.OpenDoor1();
			if (answer == "a" || answer == "A")
			{
				path.OpenDoor2();
				if (answer == "a" || answer == "A") 
				{
					path.OpenLeftDoor();
				}

				else if (answer == "b" || answer == "B")
				{
					path.OpenRightDoor();
				}

				else if (answer == "c" || answer == "C")
				{
					path.OpenStraightDoor();
				}

				else if (answer == "d" || answer == "D")
				{
					path.Wait();
				}
				else
				{
					throw 1;
				}
			}
			else if (answer == "b" || answer == "B")
			{
				path.Wait();
			}

			else
			{
				throw 1;
			}
		}

		else if (answer == "b" || answer == "B")
		{
			path.Look();
			if (answer == "a" || answer == "A")
			{
				path.OpenDoor1();
			}

			else if (answer == "b" || answer == "B")
			{
				path.Keypad();
				if (answer == "a" || answer == "A")
				{
					path.OpenDoor1();
				}

				else if (answer == "b" || answer == "B")
				{
					path.Wait();
				}
				else if (answer == "2")
					throw 2;
			}

			else if (answer == "c" || answer == "C")
			{
				path.Wait();
			}

			else
			{
				throw 1;
			}
		}

		else if (answer == "c" || answer == "C")
		{
			path.Wait();
		}

		else
		{
			throw 1;
		}
	}
	catch (int error)
	{
		Invalid(error);
	}
	system("pause");
	return 0;
}

void Invalid(int error)
{
	if (error == 1)
	{
		cout << "\n\t~~~ERROR CODE 1~~~" << endl;;
		cout << "\n~~~User input invalid answer to choices~~~" << endl;
	}

	if (error == 2)
	{
		cout << "\n\t~~~ERROR CODE 2~~~" << endl;;
		cout << "\n~~~User did not input a number~~~" << endl;
	}
}
