#include <iostream>
#include <iomanip>
#include "WorldsGreatestGame/WorldsGreatestGame.h"
#include "GenresAndStories/genres.h"
using namespace std;
int main(){
    string Choice;
    cout<<"MAD LIBS!\n";
    WorldsGreatestGame();
    cout<<"Select the genre you want to play!\n\n";
    cout<<"Action               Computing\n";
    cout<<"Adventure            Entertainment\n";
    cout<<"Animal               Holiday\n";
    cout<<"Baby                 News\n";
    cout<<"Crime                Music\n";
    cout<<"Comedy               Science-Fiction\n\n";
    cout<<"(Note, you have to type it out.)\n";
    cin>>Choice;
    if(Choice == "Action" || Choice == "action"){
        Action();
    }
    return 0;
}
