#include <iostream>
#include <string>
#include "WorldsGreatestGame/WorldsGreatestGame.h"
#include "GenresAndStories/genres.h"
using namespace std;
int main(){
    string Choice;
    string playAgain;
    cout<<"MAD LIBS!\n";
    WorldsGreatestGame();
    again:cout<<"Select the genre you want to play!\n\n";
    cout<<"Action               Computing\n";
    cout<<"Adventure            Entertainment\n";
    cout<<"Animal               Holiday\n";
    cout<<"Baby                 News\n";
    cout<<"Crime                Music\n";
    cout<<"Comedy               Science-Fiction\n\n";
    cout<<"(Note, you have to type it out.)\n";
    getline(cin, Choice);
    if(Choice == "Action" || Choice == "action"){
        Action();
    }

    cout<<"Would you like to play again? (Y/N)\n";
    cin>>playAgain;
    if(playAgain == "Yes" || playAgain == "yes" || playAgain == "y" || playAgain == "Y"){
        //This not worky :(
        goto again;
    }
    else if(playAgain == "No" || playAgain == "no" || playAgain == "n" || playAgain == "N"){
        cout<<"See you next time!\n";
    }
    return 0;
}
