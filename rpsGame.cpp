#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(0)); //initializing random function

    //declaring variables
    int amtOfGames, aiGuess, choice;  

    string rock, paper, sci, aiGuess2;
    rock = "rock";
    paper = "paper";
    sci = "scissors";

    //finding out how many games to play
    cout << "How many games would you like to play? ";
    cin >> amtOfGames;
    
    //menu to choose from
    cout << "*****RPS GAME*****" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "******************\n\n";
    for (int i = 0; i < amtOfGames; i++)
    {
        cout << "Choose a number with the corresponding item. " << endl;
        cin >> choice; 
        aiGuess = rand() % 3 + 1;
        //if aiGuess equals a num, convert it to its item
        if (aiGuess == 1)
        {
            aiGuess2 = "Rock";
        }
        else if (aiGuess == 2)
        {
            aiGuess2 = "Paper"; 
        }
        else 
        {
            aiGuess2 = "Scissors";
        }
        //if choice equals a certain num, convert to its item
        if (choice == 1)
        {
            cout << "Rock vs. " << aiGuess2 << endl;
        }
        else if (choice == 2)
        {
            cout << "Paper vs. " << aiGuess2 << endl;
        }
        else 
        {
            cout << "Scissors vs. " << aiGuess2 << endl;
        }
       
        if (choice == aiGuess)
        {
            cout << "It ended in a tie." << endl;
        }
        else if (aiGuess < choice)
        {
            cout << "You win!" << endl;
        }
        else if (choice == 1 && aiGuess == 3)
        {
            cout << "You lose";
        }
        else 
        {
            cout << "You win!" << endl;
        }
    }
    cout << endl;
    cout << "Thank you for playing my Rock Paper Scissors game!";
    return 0;
}

