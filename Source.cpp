#include <iostream>
#include <string>
#include "Paths.h"
using namespace std;
void Invalid(int error);
string answer; 
string name;
int main()
{

	Paths path;


	//Plays the introduction
	name = path.Intro();
	//The overall try function, making sure that the entire code is able to throw an error
	try
	{
		//Initiates Error 3
		if (name == "3")
		{
			throw 3;
		}
		else
		{
			path.FirstChoice();
		}
			
	//The entirety of Source.cpp takes the user's answer from Paths.cpp and applies it to the large decision tree laid out here.
	//Source.cpp is no more than a bunch of if's, then's, and else's.

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
					//Initiates Error 1
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
				answer = path.Keypad();
				if (answer == "a" || answer == "A")
				{
					path.OpenDoor1();
				}

				else if (answer == "b" || answer == "B")
				{
					path.Wait();
				}
				else if (answer == "TrueEnd")
				{
					path.TrueEnd();
					if (answer == "a" || answer == "A")
					{
						cout << "Thank you for the positive review!" << endl;
						system("pause");
						exit(EXIT_FAILURE);
					}
					else if (answer == "b" || answer == "B")
					{
						//Initiates Error 4
						throw 4;
					}
					else
						throw 1;
				}
				else if (answer == "2")
					//Initiates Error 2
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

//Function that holds all the errors
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
	if (error == 3)
	{
		cout << "\n\t~~~ERROR CODE 3~~~" << endl;;
		cout << "\n~~~Name can not include a number~~~" << endl;
	}
	if (error == 4)
	{
		cout << "\n\t~~~ERROR CODE 4~~~" << endl;;
		cout << "\n~~~User gave a negative review~~~" << endl;
	}
}
