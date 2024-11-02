#include "AnimalGuessingGame.h"
#include <iostream>
#include <string>
using namespace std;

//func with body
void displayFinalScore(int totalScore) {
	cout << "Your total score is: " <<totalScore<< endl;
}



//func with body
void playAnimalGuessingGame() 
{
	//variables
	string answer;
	string playAgain;
	int totalScore = 0; //keep counting and adding

	do {

		int score = 0; //initial score for each round
		//Animal 1
		cout << "\nHint: A large animal that lives in Jungle." << endl;

		cout << "what is the name of the animal?\t";
		cin >> answer;

		if (answer == "elephant" || answer == "Elephant" || answer == "ELEPHANT") {
			cout << "Hooray! your answer is correct!" << endl;
			score += 100;
			cout << "\nCongratulation! Your score is: " << score <<endl;
		}
		else
		{
			cout << "Incorrect! Please try again. Think of a very large animal" << endl;
		}


		cout << "\n----------------------------------------------------\n" << endl;

		//Animal 2
		cout << "\nHint: It lives in Ocean and known as swimming machine" << endl;
		cout << "What is the name of the animal?\t";
		cin >> answer;

		if (answer == "Shark" || answer == "shark" || answer == "SHARK") {
			cout << "Yay! you got it. It is a shark." << endl;
			score += 100;
			cout << "\nCongratulation! You earned: " << score << endl;
		}
		else {
			cout << "Inccorrect! Please try again. Think of a fish with super sharp teeth." << endl;
		}

		cout << "\n----------------------------------------------------\n" << endl;
		//Animal 3
		cout << "\nHint: It has wing but cannot fly. It can can carry a small person on its back" << endl;
		cout << "What is the name of the animal?\t";
		cin >> answer;

		if (answer == "ostrich" || answer == "Ostrich" || answer == "OSTRICH") {
			cout << "Correct! That's an Ostrict" << endl;
			score += 100;
			cout << "\nCongratulation! You got: " << score << endl;
		}
		else {
			cout << "Incorrect! Try again. Think of a big bird but it is too larg" << endl;
		}


		cout << "\n----------------------------------------------------\n" << endl;

		//UPdate total score and show it when user done playing
		totalScore += score;
		
		//score for current round
		cout << "\nYour score for this round is: " << score <<endl;
		cout << "\nYou total score now is: "<< totalScore <<endl;
		

		//allow user to continue playing or not
		cout << "\nDo you want to play again? (y/n)\t";
		cin >> playAgain;
	} while (playAgain == "y" || playAgain == "Y");

	//final total score
	displayFinalScore(totalScore);
}//end func