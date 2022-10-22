#include <iostream>
#include <stdlib.h>
using namespace std;
void SickLetter(){
    system("CLS");
    string lastNameThatsNotYours1, sillyWord1, lastNameThatsNotYours2, illness, noun1, adjective1, adjective2, sillyWord2, place, noun2, lastNameThatsNotYours3;
    float number1, number2;
    cout<<"Last name thats not yours: ";
    cin>>lastNameThatsNotYours1;
    cout<<"Silly word: ";
    cin>>sillyWord1;
    cout<<"Last name thats not yours: ";
    cin>>lastNameThatsNotYours2;
    cout<<"Illness: ";
    cin>>illness;
    cout<<"Noun: ";
    cin>>noun1;
    cout<<"Adjective: ";
    cin>>adjective1;
    cout<<"Adjective: ";
    cin>>adjective2;
    cout<<"Silly word: ";
    cin>>sillyWord2;
    cout<<"Number: ";
    cin>>number1;
    cout<<"Place: ";
    cin>>place;
    cout<<"Number: ";
    cin>>number2;
    cout<<"Noun: ";
    cin>>noun2;
    cout<<"Last name thats not yours: ";
    cin>>lastNameThatsNotYours3;
    cout<<endl;
    cout<<"Sick Letter:\n\n";
    cout<<"Dear School Nurse : miss "<<lastNameThatsNotYours1<<endl<<endl;
    cout<<sillyWord1<<" "<<lastNameThatsNotYours2<<" will not be attending school today. He/She has come down with a case of "<<illness<<" and has horrible "<<noun1<<" and a/an "<<adjective1<<" fever. We have made an appointment with the "<<adjective2<<" Dr. "<<sillyWord1<<" who has studied for "<<number1<<" years in "<<place<<" and has "<<number2<<" degrees in pediatrics. He will send you all the "<<noun2<<" you need. Thank you!\n\n";
    cout<<"Sincerely,\n\n";
    cout<<"Mrs. "<<lastNameThatsNotYours3<<endl<<endl;
}

void PiratesSeenNearTheCoastOfNewJersey(){
    system("CLS");
    string noun1, pluralNoun1, pastTenseVerb1, noun2, adjective1, noun3, pastTenseVerb2, adverb1, adjective2, adjective3, noun4, adverb2, noun5, verb, pastTenseVerb3, noun6, noun7, verbEndingInIng, pastTenseVerb4, noun8, adjective4;
    cout<<"Noun: ";
    cin>>noun1;
    cout<<"Plural noun: ";
    cin>>pluralNoun1;
    cout<<"Past tense verb: ";
    cin>>pastTenseVerb1;
    cout<<"Noun: ";
    cin>>noun2;
    cout<<"Adjective: ";
    cin>>adjective1;
    cout<<"Noun: ";
    cin>>noun3;
    cout<<"Past tense verb: ";
    cin>>pastTenseVerb2;
    cout<<"Adverb: ";
    cin>>adverb1;
    cout<<"Adjective: ";
    cin>>adjective2;
    cout<<"Adjective: ";
    cin>>adjective3;
    cout<<"Noun: ";
    cin>>noun4;
    cout<<"Adverb: ";
    cin>>adverb2;
    cout<<"Noun: ";
    cin>>noun5;
    cout<<"Verb: ";
    cin>>verb;
    cout<<"Past tense verb: ";
    cin>>pastTenseVerb3;
    cout<<"Noun: ";
    cin>>noun6;
    cout<<"Noun: ";
    cin>>noun7;
    cout<<"Verb ending in ing: ";
    cin>>verbEndingInIng;
    cout<<"Past tense verb: ";
    cin>>pastTenseVerb4;
    cout<<"Noun: ";
    cin>>noun8;
    cout<<"Adjective: ";
    cin>>adjective4;
    cout<<"Pirates Seen Near The Coast Of New Jersey\n\n";
    cout<<"In the beginning of time in a/an "<<noun1<<" blue two "<<pluralNoun1<<" were sailing in the Inlet near Barnegat New Jersey. One of the pirates named Danell "<<pastTenseVerb1<<" that his "<<noun2<<" were getting "<<adjective1<<". His pirate friend Michael said yo ho, we have hit a/an "<<noun3<<" and we have "<<pastTenseVerb2<<" a leak. The water began to fill the boat "<<adverb1<<" and the pirates were "<<adjective2<<" they would sink and be eaten by "<<adjective3<<" sharks. The sharks began circling the "<<noun4<<". The two pirates had to think "<<adverb2<<". What should we do said Danell. I have "<<noun5<<" and nails we could try to "<<verb<<" the boat with that said Michael. Danell agreed and they got to work, soon they had "<<pastTenseVerb3<<" up the boat. Just then a "<<noun6<<" ran into the boat and broke open the patch they had just finished. Without enough wood to fix it again, their fate looked grim. All of a sudden a school of giant prehistoric "<<noun7<<" came "<<verbEndingInIng<<" by. They swam under the boat and "<<pastTenseVerb4<<" it up to the surface so that it wouldn't sink. The Jellyfish floated the boat all the way back into the "<<noun8<<" and the "<<adjective4<<" pirates were saved.\n\n";
}

void WhatHappenedToYou(){
    system("CLS");
    string pluralNoun, adjective, animal, anyVehicle, noun, bodyPart;
    int numberMoreThanOne;
    cout<<"Plural noun: ";
    cin>>pluralNoun;
    cout<<"Adjective: ";
    cin>>adjective;
    cout<<"Animal: ";
    cin>>animal;
    cout<<"Number more than one: ";
    number:cin>>numberMoreThanOne;
    if(numberMoreThanOne <= 1){
        cout<<"Please enter a number greater than one: ";
        goto number;
    } 
    cout<<"Any vehicle: ";
    cin>>anyVehicle;
    cout<<"Noun: ";
    cin>>noun;
    cout<<"Body part: ";
    cin>>bodyPart;
    cout<<"What Happened To You?!\n\n";
    cout<<"You woke up one morning with a smile on your face.\n\n";
    cout<<"Time for a road trip\n\n";
    cout<<"You grab a bag full of "<<pluralNoun<<" and your best friend and hit the road.\n\n";
    cout<<"As you drive down the road you notice a very "<<adjective<<" "<<animal<<".\n\n";
    cout<<"You stop to take a picture of it.\n\n";
    cout<<"When you accidentaly leave the flash one, IT ATTACKS YOU.\n\n";
    cout<<"After "<<numberMoreThanOne<<" hours of pain, you and your friend get back in the car and continue with the road trip.\n\n";
    cout<<"After another hour of driving you see a "<<anyVehicle<<" in the middle of a field.\n\n";
    cout<<"You and your friend run over to it. Someone comes up behind you with a "<<noun<<" and hits you with it.\n\n";
    cout<<"You die of "<<bodyPart<<" trauma.\n";
}
void TheDayThatZombiesAttack(){

}