#include <iostream>
#include <stdlib.h>
#include "actionstories.h"
using namespace std;
void Action(){
    int actionSelection;
    system("CLS");
    cout<<"You Chose Action!\n";
    cout<<"Select which story you want to play:\n\n";
    cout<<"1. Sick Letter                                                               6. The Fight: A Short Story\n";
    cout<<"2. Pirates Seen Near The Coast Of New Jersey                                 7. A Regular Day At Hogwarts (Or Not)\n";
    cout<<"3. What Happened To You?!                                                    8. Secret Agent\n";
    cout<<"4. The Day The Zombies Attack!                                               9. Revenge Of Mr. Flower\n";
    cout<<"5. A War Story                                                               10. Farm Funnel Fury\n\n";
    cout<<"(Note: Use numbers from 1-10!)\n";
    cin>>actionSelection;
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
    }
}
