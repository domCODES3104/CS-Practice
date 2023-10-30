#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(0)); //initializing random function

    //declaring variables
    int amtOfGames, aiGuess, choice;  
    string choices[3] = {"rock", "paper", "scissors"};

    //finding out how many games to play
    cout << endl;
    
    //creating top barrier
    for (int x = 0; x < 30; x++)
    {
        cout << "*";
    }
    cout << endl;
    
    //finding out how many times the user would like to play
    cout << "How many games would you like to play? ";
    cin >> amtOfGames;
    
    //menu to choose from
    cout << "*****RPS GAME*****" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "******************\n\n";

    //for loop to play the game 'amtOfGames' amount of times
    for (int i = 0; i < amtOfGames; i++)
    {
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        //while number isn't 1-3
        while (choice < 1 || choice > 3)
        {
            cout << "Inavlid choice. Try again: ";
            cin >> choice;
        }

        //generate random choice for computer (1-3)
        aiGuess = rand() % 3 + 1;

        //outputting what was chosen from both the computer and the user
        cout << "You chose: " << choices[choice - 1] << endl;
        cout << "Computer chose: " << choices[aiGuess - 1] << endl;

        //determining who won
        if (choice == aiGuess)
        {
            cout << "Tie!" << endl;
        }
        else if (choice == 1 && aiGuess == 3 || choice == 2 && aiGuess == 1 || choice == 3 && aiGuess == 2)
        {
            cout << "You win!" << endl;
        }
        else
        {
            cout << "You lose!" << endl;      
        }
    } //end of for loop

    //create bottom barrier
    for (int z = 0; z < 30; z++)
    {
        cout << "*";
    }
    return 0;
}

