#include <iostream>
#include <string>
#include "Paths.h"

using namespace std;

extern string answer;

string GetTextFromUser(string prompt)
{
	string answer = "";
	bool isValid = false;

	do
	{
		cout << prompt;
		cin >> answer;
		if (answer == "")
		{
			cout << "Invalid answer, try again" << endl;
			isValid = false;
		}
		else
		{
			isValid = true;

			return answer;
		}
	} while (isValid == false);
}

bool GetNumbersFromUser(string prompt)
{
	int code;
	bool isValid = false;

	cout << prompt;
	cin >> code;
	if (code == 6180)
	{
		isValid = true;
		return isValid;
	}

	else
	{
		isValid = false;
		return isValid;
	}

}
void Paths::End1()
{
	cout << "***Ending 1: Patience is a Virtue...Sometimes***" << endl << "GAME OVER!" << endl << "As you fall through the endless void of the afterlife, a single digit flashes into your mind: 6" << endl;
}

void Paths::End2()
{
	cout << "***Ending 2: The Blue Pill....or was it the Red Pill?***" << endl << "GAME OVER!" << endl << "As you fall through the endless void of the afterlife, a single digit flashes into your mind: 1" << endl;
}

void Paths::End3()
{
	cout << "***Ending 3: The Stanford Tale***" << endl << "GAME OVER!" << endl << "As you fall through the endless void of the afterlife, a single digit flashes into your mind: 8" << endl;
}
void Paths::End4()
{
	cout << "***Ending 4: Meet the Developers***" << endl << "GAME OVER!" << endl << "As you fall through the endless void of the afterlife, a single digit flashes into your mind: 0" << endl;
}
void Paths::TrueEnd()
{
	cout << "A panel above the keypad lowers, revealing another screen that says: " << endl;
	cout << "Congratulations! You have reached the True Ending! Feel free to quit the game at any time, and thank you for playing!" << endl << endl;
	cout << "***Ending 5: The End***" << endl << "THANK YOU SO MUCH FOR TO PLAYING MY GAME!";
	exit(EXIT_FAILURE);
}
string Paths::Keypad()
{
	bool code;
	cout << "What will you enter?" << endl;
	code = GetNumbersFromUser("I will enter: ");
	if (code == true)
	{
		TrueEnd();
		return 0;
	}
	else
	{
		cout << "The keypad flashes a red light and the numbers disappear, making sure you can't use it again. You seem to have entered in an incorrect code." << endl;
		cout << "A. Open the door\nB. Wait" << endl;
		answer = GetTextFromUser("I choose option: ");
		return answer;
	}
}
void Paths::Invalid()
{
	cout << "Sorry, you don't seem to understand how these things work. Goodbye" << endl;
}
string Paths::OpenDoor1()
{
	cout << "You open the door and enter...another room? It looks identical to the first one in every way..." << endl;
	cout << "A. Open the door\nB. Wait" << endl;
	answer = GetTextFromUser("I choose option: ");
	return answer;
}

void Paths::OpenStraightDoor()
{
	cout << "When you step through the door, you are greeted to a row of monitors. None of them seem to be on except for one in the corner. You walk over to it and find a small white dog working at the computer, working on what seems to be a game. It seems as though it's hard at work. When the dog finally spots you, he frantically types on the keyboard. You see him type 'End4(--" << endl;
	End4();
}
void Paths::OpenLeftDoor()
{
	cout << "As soon as you step through the door, you feel as though you awaken from a dream. Around you are people in pods, and you soon realize that you yourself are in a pod. You then realize this seems strikingly similar to The Matrix, but since you've never seen the movie, you make no further connections and die from a stray electrical wire." << endl;
	End2();
}

void Paths::OpenRightDoor()
{
	cout << "'This was not the correct way to the meeting room, and Stanley knew it perfectly well. Perhaps he wanted to stop by the employee lounge first, just to admire-Wait you're not Stanley, what am I doing here? Stay in your game! I'm going back to mine.'" << endl;
	cout << "With no one to guide you, you soon lose meaning in the grand scheme of the universe and fade into non-existence." << endl;
	End3();
}
string Paths::OpenDoor2()
{
	cout << "Alright, now this is worse. In front of you is a room identical to the other two, but now there are 3 doors, one on each wall in front, to the right, and to the left of you. What will you do?" << endl;
	cout << "A. Open the left door\nB. Open the right door\nC. Open the straight door\nD. Wait" << endl;
	answer = GetTextFromUser("I choose option: ");
	return answer;
}

string Paths::Look()
{
	cout << "Other than the door, there is only a single keypad with a screen above it. There are no windows or other means of escape." << endl;
	cout << "A. Open the door\nB. Enter a number into the keypad\nC. Wait" << endl;
	answer = GetTextFromUser("I choose option: ");
	return answer;
}

void Paths::Wait()
{
	cout << "You wait." << endl << endl << endl << "And wait." << endl << endl << endl << endl << endl << "And wait....Until you die of starvation." << endl;
	End1();
}
string Paths::Intro()
{
	cout << "You find yourself in a room with only one door in front of you. You have no memory of how yo got here. What do you do?" << endl;
	cout << "A. Open the door\nB. Look around the room some more\nC. Wait" << endl;
	answer = GetTextFromUser("I choose option: ");
	return answer;
}
