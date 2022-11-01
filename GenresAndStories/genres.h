#include <iostream>
#include <stdlib.h>
#include "actionstories.h"
#include "adventurestories.h"
using namespace std;
void Action(){
    int actionSelection;
    system("CLS");
    cout<<"You Chose Action!\n";
    cout<<"Select which story you want to play:\n\n";
    cout<<"1. Sick Letter                                                               6. A Regular Day At Hogwarts (Or Not)\n";
    cout<<"2. Pirates Seen Near The Coast Of New Jersey                                 7. Crazy Taxi\n";
    cout<<"3. What Happened To You?!                                                    8. Secret Agent\n";
    cout<<"4. The Day The Zombies Attack!                                               9. The Big Race!\n";
    cout<<"5. A War Story                                                               10. Revenge Of Mr.Flower\n\n";
    cout<<"(Note: Use numbers from 1-10!)\n";
    input:cin>>actionSelection;
    switch(actionSelection){
        case 1:
            SickLetter();
            break;
        case 2:
            PiratesSeenNearTheCoastOfNewJersey();
            break;
        case 3:
            WhatHappenedToYou();
            break;
        case 4:
            TheDayThatZombiesAttack();
            break;
        case 5:
            AWarStory();
            break;
        case 6:
            ARegularDayAtHogwarts();
            break;
        case 7:
            CrazyTaxi();
            break;
        case 8:
            SecretAgent();
            break;
        case 9:
            TheBigRace();
            break;
        case 10:
            RevengeOfMrFlower();
            break;
        default:
            cout<<"Unknown output. Use numbers from 1-10: ";
            goto input;
    }
}

void Adventure(){
    int adventureSelection;
    system("CLS");
    cout<<"You Chose Adventure!\n";
    cout<<"Select which story you want to play\n\n";
    cout<<"1. My Baby's First Birthday                                                              6. Swimming Lessons!\n";  
    cout<<"2. A Cold Winter Day                                                                     7. Jurassic Park\n";
    cout<<"3. Road Trip Adventures                                                                  8. Talk Like A Pirate\n";
    cout<<"4. Did You Ever Hear The Tragedy Of Darth Plagueis The Wise?                             9. The Monster\n";
    cout<<"5. MINERAFT                                                                              10. Pretty Little Liars\n\n";
    cout<<"(Note: Use numbers from 1-10!)\n";
    cin>>adventureSelection;
    //WIP   
    switch(adventureSelection){
        case 1:
            MyBabysFirstBirthday();
            break;
        case 2:
            AColdWinterDay();
            break;
        case 3:
            RoadTripAdventures();
            break;
        case 4:
            TheTradegyOfDarthPlagueis();
            break;
        case 5:
            MINERAFT();
            break;
        case 6:
            SwimmingLessons();
            break;
        case 7:
            JurassicPark();
            break;
        case 8:
            TalkLikeAPirate();
            break;
    }                                                                                              
}                                