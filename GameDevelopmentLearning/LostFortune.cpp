
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Expensive Calculator
	// Demonstrates built-in arithmetic operators
	cout << "7 + 3 = " << 7 + 3 << endl;
	cout << "7 - 3 = " << 7 - 3 << endl;
	cout << "7 * 3 = " << 7 * 3 << endl;

	cout << "7 / 3 = " << 7 / 3 << endl;
	cout << "7.0 / 3.0 = " << 7.0 / 3.0 << endl;

	cout << "7 % 3 = " << 7 % 3 << endl;

	cout << "7 + 3 * 5 = " << 7 + 3 * 5 << endl;
	cout << "(7 + 3) * 5 = " << (7 + 3) * 5 << endl;

	// Game Over
	// A first C++ program
	std::cout << "Game Over!" << std::endl;

	// Game Over 2.0
	// Demonstrates a using directive
	cout << "Game Over!" << endl;

	// Game Over 3.0
	// Demonstrates using declarations
	cout << "Game Over!" << endl;

	// Game Stats
	// Demonstrates declaring and initializing variables
	//int score;
	//double distance;
	//char playAgain;
	//bool shieldsUp;

	//short lives, aliensKilled;

	//score = 0;
	//distance = 1200.76;
	//playAgain = 'y';
	//shieldsUp = true;
	//lives = 3;
	//aliensKilled = 10;

	//double engineTemp = 6572.89;

	//cout << "\nscore: " << score << endl;
	//cout << "distance: " << distance << endl;
	//cout << "playAgain: " << playAgain << endl;
	////skipping shieldsUp since you don't generally print Boolean values
	//cout << "lives: " << lives << endl;
	//cout << "aliensKilled: " << aliensKilled << endl;
	//cout << "engineTemp: " << engineTemp << endl;

	//int fuel;
	//cout << "\nHow much fuel? ";
	//cin >> fuel;
	//cout << "fuel: " << fuel << endl;

	//typedef unsigned short int ushort;
	//ushort bonus = 10;
	//cout << "\nbonus: " << bonus << endl;

	// Game Stats 2.0
	// Demonstrates arithmetic operations with variables
	//unsigned int score = 5000;
	//cout << "score: " << score << endl;

	////altering the value of a variable
	//score = score + 100;
	//cout << "score: " << score << endl;

	////combined assignment operator
	//score += 100;
	//cout << "score: " << score << endl;

	////increment operators
	//int lives = 3;
	//++lives;
	//cout << "lives: " << lives << endl;

	//lives = 3;
	//lives++;
	//cout << "lives: " << lives << endl;

	//lives = 3;
	//int bonus = ++lives * 10;
	//cout << "lives, bonus = " << lives << ", " << bonus << endl;

	//lives = 3;
	//bonus = lives++ * 10;
	//cout << "lives, bonus = " << lives << ", " << bonus << endl;

	////integer wrap around
	//score = 4294967295;
	//cout << "\nscore: " << score << endl;
	//++score;
	//cout << "score: " << score << endl;

	// GameStats 3.0
	// Demonstrate constants

	const int ALIEN_POINTS = 150;
	int aliensKilled = 10;
	int score = aliensKilled * ALIEN_POINTS;
	cout << "score: " << score << endl;

	enum difficulty { NOVICE, EASY, NORMAL, HARD, UNBEATABLE };
	difficulty myDifficulty = EASY;

	enum shipCost { FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50 };
	shipCost myShipCost = BOMBER_COST;
	cout << "\nTo upgrade my ship to a Cruiser will cost " << (CRUISER_COST - myShipCost) << " Resource Points.\n";

	// Lost Fortune
	// A personalized adventure

	const int GOLD_PIECES = 900;
	int adventurers, killed, survivors;
	string leader;

	//get the information
	cout << "Welcome to Lost Fortune\n\n";
	cout << "Please enter the following for your personalized adventure\n";

	cout << "Enter a number: ";
	cin >> adventurers;

	cout << "Enter a number, smaller than the first: ";
	cin >> killed;

	survivors = adventurers - killed;

	cout << "Enter your last name: ";
	cin >> leader;

	//tell the story
	cout << "\nA brave group of " << adventurers << " set out on a quest ";
	cout << "-- in search of the lost treasure of the Ancient Dwarves. ";
	cout << "The group was led by that legendary rogue, " << leader << ".\n";

	cout << "\nAlong the way, a band of marauding ogres ambushed the party. ";
	cout << "All fought bravely under the command of " << leader;
	cout << ", and the ogres were defeated, but at a cost. ";
	cout << "Of the adventurers, " << killed << " were vanquished, ";
	cout << "leaving just " << survivors << " in the group.\n";

	cout << "\nThe party was about to give up all hope. ";
	cout << "But while laying the deceased to rest, ";
	cout << "they stumbled upon the buried fortune. ";
	cout << "So the adventurers split " << GOLD_PIECES << " gold pieces.";
	cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
	cout << " pieces to keep things fair of course.\n";

	int value1, value2, value3;
	int counter = 0;
	cout << "Enter Value1: ";
	cin >> value1;
	counter++;
	cout << "Enter Value2: ";
	cin >> value2;	
	counter++;
	cout << "Enter Value3: ";
	cin >> value3;
	counter++;
	cout << "Avarage is: " << (value1 + value2 + value3) / counter << endl;
	system("pause");
	return 0;
}