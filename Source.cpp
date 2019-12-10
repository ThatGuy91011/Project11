#include <iostream>
#include <string>
#include "Paths.h"
using namespace std;

string answer; 

int main()
{

	Paths object_Paths;

	
	
	object_Paths.Intro();
	if (answer == "a" || answer == "A")
	{
		object_Paths.OpenDoor1();
		if (answer == "a" || answer == "A")
		{
			object_Paths.OpenDoor2();
			if (answer == "a" || answer == "A") 
			{
				object_Paths.OpenLeftDoor();
			}

			else if (answer == "b" || answer == "B")
			{
				object_Paths.OpenRightDoor();
			}

			else if (answer == "c" || answer == "C")
			{
				object_Paths.OpenStraightDoor();
			}

			else if (answer == "d" || answer == "D")
			{
				object_Paths.Wait();
			}
			else
			{
				object_Paths.Invalid();
			}
		}
		else if (answer == "b" || answer == "B")
		{
			object_Paths.Wait();
		}

		else
		{
			object_Paths.Invalid();
		}
	}

	else if (answer == "b" || answer == "B")
	{
		object_Paths.Look();
		if (answer == "a" || answer == "A")
		{
			object_Paths.OpenDoor1();
		}

		else if (answer == "b" || answer == "B")
		{
			object_Paths.Keypad();
			if (answer == "a" || answer == "A")
			{
				object_Paths.OpenDoor1();
			}

			else if (answer == "b" || answer == "B")
			{
				object_Paths.Wait();
			}
		}

		else if (answer == "c" || answer == "C")
		{
			object_Paths.Wait();
		}

		else
		{
			object_Paths.Invalid();
		}
	}

	else if (answer == "c" || answer == "C")
	{
		object_Paths.Wait();
	}

	else
	{
		object_Paths.Invalid();
	}
	system("pause");
	return 0;
}
