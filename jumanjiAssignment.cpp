//Lost Fortune
//A Personalized Adventure

#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	const int MORPHIUS_COINS = 900;
	int drinks, punches, tylenol;
	string leader;

	//get the information
	cout << "Welcome to Paradise\n\n";
	cout << "How many will you be havin?";
	cout << "Enter a number: ";
	cin >> drinks;

	cout << "Enter a number, smaller than the first: ";
	cin >> punches;
	tylenol = drinks + punches;
	cout << "Enter your last name: ";
	cin >> leader;
	//tell the story
	cout << "\nYou are sitting at Cabbanna bar having " << drinks << " Margaritas ";
	cout << "You notice a fair orc in your peripherals. You go over to talk to it. ";
	cout << "The Orcs ugly friend steps in and asks, ARE YOU " << leader << ".\n";
	cout << "\nYou bellow out laughing screaming \n";
	cout << "OF COURSE I AM " << leader << " What are you going to do? ";
	cout << "The ORCS ugly friend jumps out the chair and starts to punch you. ";
	cout << "It hits you, " << punches << "times and you black out, ";
	cout << "waking up the next morning you have to take " << tylenol << " tylenol because your face is throbbing.\n ";
	cout << "\nYou run outside to find that your car is filled with cash. ";
	cout << "you call the orc and it says that the money is thier apology,";
	cout << "You get excited because now you can get a new car .";
	cout << "You go to the dealership with your " << MORPHIUS_COINS << " morphius coins, and buy a new tesla  ";
	cout << leader << "My generous friend, says the saleself, can you spare a few morphius coins for me and my family " << (MORPHIUS_COINS % punches);
	cout << "You had over " << (MORPHIUS_COINS % punches) << "to the saleself. Good Job making thier day!\n";
	return 0;
}