#include <iostream>
#include <string>
#include "Paths.h"

using namespace std;

//String to hold the player's answer
extern string answer;
//Reference for inputting the player's name
string& name = answer;
//Stores the player's input for the code
int code;
//For for loop
int i;

//Function to get text from user
string GetTextFromUser(string prompt)
{
	string answer;
	bool isValid = false;
	int strCheck;

	try
	{

		//This do-while loop checks to make sure the player has entered a valid string
		do
		{
			cout << prompt;
			cin >> answer;

			for (int i = 0; i < answer.length(); i++)
				if (isdigit(answer[i]) == false)
					strCheck = 1;
				else
					strCheck = 0;
			if (strCheck == 0)
			{
				throw 3;
			}
			else
			{
				isValid = true;

				return answer;
			}
		} while (isValid == false);
	}
	catch (int error)
	{
		return "3";
	}
}

//This function gets the code input from the user
int GetNumbersFromUser(string prompt)
{
	string code;
	int numCheck;
	int isValid = 0;

	//This do=while loop has the player continue to enter codes until they get the right one or enter 0
	do {
		cout << "What will you enter? (Enter 0 to exit)" << endl;
		cout << prompt;
		cin >> code;
		try
		{

			//Checks each character to see if it is a number
			for (int i = 0; i < code.length(); i++)
				if (isdigit(code[i]) == false)
					numCheck = 0;
				else
					numCheck = 1;

			//If the input is indeed a number...
			if (numCheck == 1)
			{
				//If the code is right...
				if (code == "6180")
				{
					//Go on to the True Ending
					isValid = 1;
					return isValid;
				}

				//Otherwise...
				else
				{
					//The code is incorrect
					isValid = 0;
					return isValid;
				}
			}
			//If any of the characters is not a number...
			else
			{
				//Error 2
				throw 2;
			}
		}
		catch (int error)
		{
			//Returns the error back to the Keypad function
			if (error == 2)
			{
				isValid = 2;
				return isValid;
			}
		}
	} while (code != "0");
	return isValid;
}

//Lines 71-95 contain the separate endings for the game
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
string Paths::TrueEnd()
{
	cout << "A panel above the keypad lowers, revealing another screen that says: " << endl;
	cout << "Congratulations! You have reached the True Ending! Feel free to quit the game at any time, and thank you for playing!" << endl << endl;
	cout << "***Ending 5: The End***" << endl << "THANK YOU SO MUCH FOR TO PLAYING MY GAME!";
	cout << "\n\t\t*Would you like to leave a positive review of the game?" << endl;
	cout << "A. Yes\nB. No" << endl;
	answer = GetTextFromUser("I choose option: ");
	return answer;
}

//These functions take the user's answer and apply it back to main for processing
string Paths::Keypad()
{
	int code;
	code = GetNumbersFromUser("I will enter: ");
	if (code == 1)
	{
		return "TrueEnd";
	}
	else if (code == 0)
	{
		cout << "The keypad flashes a red light and the numbers disappear, making sure you can't use it again. You seem to have entered in an incorrect code." << endl;
		cout << "A. Open the door\nB. Wait" << endl;
		answer = GetTextFromUser("I choose option: ");
		return answer;
	}
	//Returns the error back to the main function
	else
	{
		answer = "2";
		return answer;
	}
		
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

string Paths::FirstChoice()
{
	cout << "Welcome " << answer << ". White Room is a text adventure game where you answer with a letter to indicate your choice. There are multiple endings, but one hidden ending is the true ending." << endl;
	cout << "Initializing..." << endl << endl << endl;
	cout << "You find yourself in a room with only one door in front of you. You have no memory of how yo got here. What do you do?" << endl;
	cout << "A. Open the door\nB. Look around the room some more\nC. Wait" << endl;
	answer = GetTextFromUser("I choose option: ");
	return answer;
}
//Introduction to the game
string Paths::Intro()
{
	cout << "\t\t****Welcome to White Room****" << endl;
	name = GetTextFromUser("My name is: ");
	return name;
}

