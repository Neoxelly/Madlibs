#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
void SickLetter(){
    system("CLS");
    string lastNameThatsNotYours1, sillyWord1, lastNameThatsNotYours2, illness, noun1, adjective1, adjective2, sillyWord2, place, noun2, lastNameThatsNotYours3;
    float number1, number2;
    cout<<"Last name thats not yours: ";
    cin.ignore();
    getline(cin, lastNameThatsNotYours1);

    cout<<"Silly word: ";
    cin.ignore(0,'\n');
    getline(cin, sillyWord1);

    cout<<"Last name thats not yours: ";
    cin.ignore(0,'\n');
    getline(cin, lastNameThatsNotYours2);

    cout<<"Illness: ";
    cin.ignore(0,'\n');
    getline(cin, illness);

    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun1);

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective1);

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective2);

    cout<<"Silly word: ";
    cin.ignore(0,'\n');
    getline(cin, sillyWord2);

    cout<<"Number: ";
    cin>>number1;
    cin.ignore(1,'\n');

    cout<<"Place: ";
    cin.ignore(0,'\n');
    getline(cin, place);

    cout<<"Number: ";
    cin>>number2;
    cin.ignore(1,'\n');

    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun2);

    cout<<"Last name thats not yours: ";
    cin.ignore(0,'\n');
    getline(cin, lastNameThatsNotYours3);
    
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
    cin.ignore();
    getline(cin, noun1);

    cout<<"Plural noun: ";
    cin.ignore(0,'\n');
    getline(cin, pluralNoun1);

    cout<<"Past tense verb: ";
    cin.ignore(0,'\n');
    getline(cin, pastTenseVerb1);

    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun2);

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective1);

    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun3);

    cout<<"Past tense verb: ";
    cin.ignore(0,'\n');
    getline(cin, pastTenseVerb2);

    cout<<"Adverb: ";
    cin.ignore(0,'\n');
    getline(cin, adverb1);

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective2);

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective3);

    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun4);

    cout<<"Adverb: ";
    cin.ignore(0,'\n');
    getline(cin, adverb2);

    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun5);

    cout<<"Verb: ";
    cin.ignore(0,'\n');
    getline(cin, verb);

    cout<<"Past tense verb: ";
    cin.ignore(0,'\n');
    getline(cin, pastTenseVerb3);

    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun6);

    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun7);

    cout<<"Verb ending in ing: ";
    cin.ignore(0,'\n');
    getline(cin, verbEndingInIng);

    cout<<"Past tense verb: ";
    cin.ignore(0,'\n');
    getline(cin, pastTenseVerb4);

    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun8);

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective4);

    cout<<"Pirates Seen Near The Coast Of New Jersey\n\n";
    cout<<"In the beginning of time in a/an "<<noun1<<" blue two "<<pluralNoun1<<" were sailing in the Inlet near Barnegat New Jersey. One of the pirates named Danell "<<pastTenseVerb1<<" that his "<<noun2<<" were getting "<<adjective1<<". His pirate friend Michael said yo ho, we have hit a/an "<<noun3<<" and we have "<<pastTenseVerb2<<" a leak. The water began to fill the boat "<<adverb1<<" and the pirates were "<<adjective2<<" they would sink and be eaten by "<<adjective3<<" sharks. The sharks began circling the "<<noun4<<". The two pirates had to think "<<adverb2<<". What should we do said Danell. I have "<<noun5<<" and nails we could try to "<<verb<<" the boat with that said Michael. Danell agreed and they got to work, soon they had "<<pastTenseVerb3<<" up the boat. Just then a "<<noun6<<" ran into the boat and broke open the patch they had just finished. Without enough wood to fix it again, their fate looked grim. All of a sudden a school of giant prehistoric "<<noun7<<" came "<<verbEndingInIng<<" by. They swam under the boat and "<<pastTenseVerb4<<" it up to the surface so that it wouldn't sink. The Jellyfish floated the boat all the way back into the "<<noun8<<" and the "<<adjective4<<" pirates were saved.\n\n";
}

void WhatHappenedToYou(){
    system("CLS");
    string pluralNoun, adjective, animal, anyVehicle, noun, bodyPart;
    float numberMoreThanOne;
    cout<<"Plural noun: ";
    cin.ignore();
    getline(cin, pluralNoun);

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective);   

    cout<<"Animal: ";
    cin.ignore(0,'\n');
    getline(cin, animal);   

    cout<<"Number more than one: ";
    number:cin>>numberMoreThanOne;
    cin.ignore(1,'\n');
    if(numberMoreThanOne <= 1){
        cout<<"Please enter a number greater than one: ";
        goto number;
    } 

    cout<<"Any vehicle: ";
    cin.ignore(0,'\n');
    getline(cin, anyVehicle);   

    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun);

    cout<<"Body part: ";
    cin.ignore(0,'\n');
    getline(cin, bodyPart);

    cout<<"What Happened To You?!\n\n";
    cout<<"You woke up one morning with a smile on your face.\n\n";
    cout<<"'Time for a road trip'\n\n";
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
    system("CLS");
    string firstName1, noun1, verb1, firstName2, verb2, adjective, verb3, verb4, properNoun, location, noun2;
    float number;
    cout<<"First name: ";
    cin.ignore();
    getline(cin, firstName1);
    
    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun1);
    
    cout<<"Verb: ";
    cin.ignore(0,'\n');
    getline(cin, verb1);
    
    cout<<"First name: ";
    cin.ignore(0,'\n');
    getline(cin, firstName2);
    
    cout<<"Verb: ";
    cin.ignore(0,'\n');
    getline(cin, verb2);
    
    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective);
    
    cout<<"Verb: ";
    cin.ignore(0,'\n');
    getline(cin, verb3);
    
    cout<<"Verb: ";
    cin.ignore(0,'\n');
    getline(cin, verb4);
    
    cout<<"Proper noun: ";
    cin.ignore(0,'\n');
    getline(cin, properNoun);
    
    cout<<"Number: ";
    cin>>number;
    cin.ignore(1,'\n');

    cout<<"Location: ";
    cin.ignore(0,'\n');
    getline(cin, location);
    
    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun2);
    
    cout<<"The Day The Zombies Attack!\n\n";
    cout<<"One fateful day, Dr. "<<firstName1<<" accidentally dumped toxic polutens in a dead body's "<<noun1<<" creating the first zombie. From there on that zombie "<<verb1<<" and terrorized millions and millions of people, until "<<firstName2<<" Shorts came to the rescue. Zack was out to find the root of this evil to "<<verb2<<" it. His mother had fallen victim to the curse herself. Zack carried a 44 "<<adjective<<" Desert Eagle just in case of a zombie attack. It was rather frequent that he "<<verb3<<" zobmies, but they didn't "<<verb4<<" him. You just never know when they might start, though. He travelled town to town looking for Dan 'Insecure Clerk' Kerry or like his friends like to call him "<<properNoun<<". After "<<number<<" years of search he finally found him in a "<<location<<". It was over after all these years when he pulled out his "<<noun2<<" and blasted that zombies head off.\n";
}

void AWarStory(){
    system("CLS");
    string occupation1, nationality, verbBaseForm1, adjective1, noun1, location, pluralNoun1, pluralNoun2, noun2, verbBaseForm2, occupation2, verbBaseForm3, exclamation1, verbPastTense1, verbPresentEndsInING1, pluralNoun3, verbPastTense2, verbPresentEndsInING2, adjective2, verbPastTense3, adjective3, pluralNoun4, firstNameOfAPerson, occupation3, bodyPart, noun3, occupation4, verbPastTense4, exclamation2, verbPastTense5, verbPresentEndsInING3, pluralNoun5, adjective4, verbPresentEndsInING4, pluralNoun6, pluralNoun7, adjective5, pluralNoun8, verbPastTense6, noun4, occupation5, adjective6, noun5, verbPastTense7, adjective7, pluralNoun9, verbPresentEndsInING5, exclamation3, exclamation4, verbPastTense8, pluralNoun10;
    float year, number1, number2;
    cout<<"Year: ";
    cin>>year;
    cin.ignore(1,'\n');

    cout<<"Occupation: ";
    cin.ignore(0,'\n');
    getline(cin, occupation1);
    
    cout<<"Nationality: ";
    cin.ignore(0,'\n');
    getline(cin, nationality);
    
    cout<<"Verb - Base Form: ";
    cin.ignore(0,'\n');
    getline(cin, verbBaseForm1);
    
    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective1);
    
    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun1);
    
    cout<<"Location: ";
    cin.ignore(0,'\n');
    getline(cin, location);
    
    cout<<"Noun - Plural: ";
    cin.ignore(0,'\n');
    getline(cin, pluralNoun1);
    
    cout<<"Noun - Plural: ";
    cin.ignore(0,'\n');
    getline(cin, pluralNoun2);
    
    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun2);
    
    cout<<"Verb - Base Form: ";
    cin.ignore(0,'\n');
    getline(cin, verbBaseForm2);
    
    cout<<"Occupation: ";
    cin.ignore(0,'\n');
    getline(cin, occupation2);
    
    cout<<"Verb - Base Form: ";
    cin.ignore(0,'\n');
    getline(cin, verbBaseForm3);
    
    cout<<"Exclamation: ";
    cin.ignore(0,'\n');
    getline(cin, exclamation1);
    
    cout<<"Verb - Past Tense: ";
    cin.ignore(0,'\n');
    getline(cin, verbPastTense1);
    
    cout<<"Verb - Present ends in ING: ";
    cin.ignore(0,'\n');
    getline(cin, verbPresentEndsInING1);
    
    cout<<"Noun - Plural: ";
    cin.ignore(0,'\n');
    getline(cin, pluralNoun3);
    
    cout<<"Verb - Past Tense: ";
    cin.ignore(0,'\n');
    getline(cin, verbPastTense2);
    
    cout<<"Number: ";
    cin>>number1;
    cin.ignore(1,'\n');

    cout<<"Verb - Present ends in ING: ";
    cin.ignore(0,'\n');
    getline(cin, verbPresentEndsInING2);
    
    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective2);
    
    cout<<"Verb - Past Tense: ";
    cin.ignore(0,'\n');
    getline(cin, verbPastTense3);
    
    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective3);
    
    cout<<"Noun - Plural: ";
    cin.ignore(0,'\n');
    getline(cin, pluralNoun4);
    
    cout<<"Full Name of a Person: ";
    cin.ignore(0,'\n');
    getline(cin, firstNameOfAPerson);
    
    cout<<"Occupation: ";
    cin.ignore(0,'\n');
    getline(cin, occupation3);
    
    cout<<"Body part: ";
    cin.ignore(0,'\n');
    getline(cin, bodyPart);
    
    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun3);
    
    cout<<"Occupation: ";
    cin.ignore(0,'\n');
    getline(cin, occupation4);
    
    cout<<"Verb - Past Tense: ";
    cin.ignore(0,'\n');
    getline(cin, verbPastTense4);
    
    cout<<"Exclamation: ";
    cin.ignore(0,'\n');
    getline(cin, exclamation2);
    
    cout<<"Verb - Past Tense: ";
    cin.ignore(0,'\n');
    getline(cin, verbPastTense5);
    
    cout<<"Verb - Present ends in ING: ";
    cin.ignore(0,'\n');
    getline(cin, verbPresentEndsInING3);
    
    cout<<"Noun - Plural: ";
    cin.ignore(0,'\n');
    getline(cin, pluralNoun5);
    
    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective4);
    
    cout<<"Verb - Present ends in ING: ";
    cin.ignore(0,'\n');
    getline(cin, verbPresentEndsInING4);
    
    cout<<"Noun - Plural: ";
    cin.ignore(0,'\n');
    getline(cin, pluralNoun6);
    
    cout<<"Noun - Plural: ";
    cin.ignore(0,'\n');
    getline(cin, pluralNoun7);
    
    cout<<"Number: ";
    cin>>number2;
    cin.ignore(1,'\n');

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective5);
    
    cout<<"Noun - Plural: ";
    cin.ignore(0,'\n');
    getline(cin, pluralNoun8);
    
    cout<<"Verb - Past Tense: ";
    cin.ignore(0,'\n');
    getline(cin, verbPastTense6);
    
    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun4);
    
    cout<<"Occupation: ";
    cin.ignore(0,'\n');
    getline(cin, occupation5);
    
    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective6);
    
    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun5);
    
    cout<<"Verb - Past Tense: ";
    cin.ignore(0,'\n');
    getline(cin, verbPastTense7);
    
    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective7);
    
    cout<<"Noun - Plural: ";
    cin.ignore(0,'\n');
    getline(cin, pluralNoun9);
    
    cout<<"Verb - Present ends in ING: ";
    cin.ignore(0,'\n');
    getline(cin, verbPresentEndsInING5);
    
    cout<<"Exclamation: ";
    cin.ignore(0,'\n');
    getline(cin, exclamation3);
    
    cout<<"Exclamation: ";
    cin.ignore(0,'\n');
    getline(cin, exclamation4);
    
    cout<<"Verb - Past Tense: ";
    cin.ignore(0,'\n');
    getline(cin, verbPastTense8);
    
    cout<<"Noun - Plural: ";
    cin.ignore(0,'\n');
    getline(cin, pluralNoun10);
    
    cout<<"A War Story\n\n";
    cout<<"It was "<<year<<", I was a/an "<<occupation1<<" for the "<<nationality<<" army. We were about to "<<verbBaseForm1<<" out for the battle that came to be known as the "<<adjective1<<" "<<noun1<<" of "<<location<<". I was all packed up with "<<pluralNoun1<<", "<<pluralNoun2<<", and a "<<noun2<<". When it was time to "<<verbBaseForm2<<", I heard my "<<occupation2<<" "<<verbBaseForm3<<", '"<<exclamation1<<"'.\n";
    cout<<"We "<<verbPastTense1<<" to our "<<verbPresentEndsInING1<<" "<<pluralNoun3<<", and we were "<<verbPastTense2<<" after "<<number1<<" hours of "<<verbPresentEndsInING2<<". We had to be "<<adjective2<<", and "<<verbPastTense3<<" behind "<<adjective3<<" "<<pluralNoun4<<". "<<firstNameOfAPerson<<", a/an "<<occupation3<<", lifted his "<<bodyPart<<" and was hit by an enemy "<<noun3<<". My "<<occupation4<<" "<<verbPastTense4<<", "<<exclamation2<<" and we all "<<verbPastTense5<<", "<<verbPresentEndsInING3<<" "<<pluralNoun5<<" at them. A "<<adjective4<<" explosion went off in the distance, "<<verbPresentEndsInING4<<" "<<pluralNoun6<<" and "<<pluralNoun7<<" eveywhere. "<<number2<<" "<<adjective5<<pluralNoun8<<" were "<<verbPastTense6<<", and we were starting to lose "<<noun4<<". Just when we thought it was all over, my "<<occupation5<<" called in a secret weapon: The "<<adjective6<<" "<<noun5<<". When it was "<<verbPastTense7<<" onto our enemies, we could see "<<adjective7<<" "<<pluralNoun9<<" "<<verbPresentEndsInING5<<" everywhere, and we could hear them call out, "<<exclamation3<<" and "<<exclamation4<<". We all "<<verbPastTense8<<", because we had won. All of the "<<pluralNoun10<<" belonged to us.\n";
    //I want to kill myself
}   

void ARegularDayAtHogwarts(){
    system("CLS");
    string firstName1, firstName2, firstName3, firstName4, firstName5, firstName6, firstName7, firstName8, firstName9, firstName10, lastName1, lastName2, lastName3, lastName4, lastName5, lastName6, lastName7, location, adjective, furniture, electronics1, electronics2;
    cout<<"Location: ";
    cin.ignore();
    getline(cin, location);

    cout<<"First name: ";
    cin.ignore(0,'\n');
    getline(cin, firstName1);

    cout<<"First name: ";
    cin.ignore(0,'\n');
    getline(cin, firstName2);

    cout<<"First name: ";
    cin.ignore(0,'\n');
    getline(cin, firstName3);

    cout<<"Last name: ";
    cin.ignore(0,'\n');
    getline(cin, lastName1);

    cout<<"First name: ";
    cin.ignore(0,'\n');
    getline(cin, firstName4);

    cout<<"Last name: ";
    cin.ignore(0,'\n');
    getline(cin, lastName2);

    cout<<"First name: ";
    cin.ignore(0,'\n');
    getline(cin, firstName5);

    cout<<"Last name: ";
    cin.ignore(0,'\n');
    getline(cin, lastName3);

    cout<<"Last name: ";
    cin.ignore(0,'\n');
    getline(cin, lastName4);

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective);
    
    cout<<"First name: ";
    cin.ignore(0,'\n');
    getline(cin, firstName6);
    
    cout<<"Last name: ";
    cin.ignore(0,'\n');
    getline(cin, lastName5);

    cout<<"Last name: ";
    cin.ignore(0,'\n');
    getline(cin, lastName6);

    cout<<"Furniture: ";
    cin.ignore(0,'\n');
    getline(cin, furniture);

    cout<<"Electronics: ";
    cin.ignore(0,'\n');
    getline(cin, electronics1);

    cout<<"Electronics: ";
    cin.ignore(0,'\n');
    getline(cin, electronics2);

    cout<<"Last name: ";
    cin.ignore(0,'\n');
    getline(cin, lastName7);

    cout<<"First name: ";
    cin.ignore(0,'\n');
    getline(cin, firstName7);

    cout<<"First name: ";
    cin.ignore(0,'\n');
    getline(cin, firstName8);

    cout<<"First name: ";
    cin.ignore(0,'\n');
    getline(cin, firstName9);

    cout<<"First name: ";
    cin.ignore(0,'\n');
    getline(cin, firstName10);

    cout<<"A Regular Day At Hogwarts (Or Not)\n\n";
    cout<<"One day at "<<location<<" Witchcraft and Wizardry school, "<<firstName1<<", "<<firstName2<<" and "<<firstName3<<" were just going to classes like a regular day, but then they found out they had a new defence against the dark arts teacher! His name was professor "<<lastName1<<" and he was as silly as "<<firstName4<<" was smart!\n";
    cout<<"When everyone was in the classroom, pro. "<<lastName2<<" said; 'I am your new defence against the dark arts teacher. Today we will start with the spell against the dreaded LAMP!'\n";
    cout<<firstName5<<" instantly shot up her hand; 'Pro. "<<lastName3<<" the lamp is not dreaded. They are just a lamp that provides light'\n";
    cout<<"'Oh no, you must be mistaken', said pro. "<<lastName4<<". 'It is very "<<adjective<<". Now who knows the spell against it?'\n";
    cout<<firstName6<<" raised his hand. He said; 'Isn't it 'Aclomonus Ecotomus'?'\n";
    cout<<"'That is correct', said "<<lastName5<<". Pro. "<<lastName6<<" continued on about how to defend yourself against "<<furniture<<" "<<electronics1<<" "<<electronics2<<" and lots of other silly things. Everyone question pro. "<<lastName7<<" asked, "<<firstName7<<" answered and got it correct. When class ws over, "<<firstName8<<" said, 'Wow "<<firstName9<<" we didn't know you had it in you'\n";
    cout<<"'Yep, I wish every day was like this. Didn't you hear he was actually only a sub?' "<<firstName10<<" spoke up.\n";
    cout<<"'Oh no, I can't imagine what tomorrow will be like.'\n";
}

void CrazyTaxi(){
    system("CLS");
    string city, pastTenseVerb, specificVehicle, noun1, noun2, noun3, noun4, restaurant, adjective1, adjective2, adjective3, adjective4, adjective5, adjective6, adjective7, femaleCelebrity, specificBuilding, verbEndingInIng1, verbEndingInIng2, religion, verb, lastName, pluralNoun, insult;
    float number;

    cout<<"City: ";
    cin.ignore();
    getline(cin, city);

    cout<<"Past tense verb: ";
    cin.ignore(0,'\n');
    getline(cin, pastTenseVerb);

    cout<<"Specific vehicle: ";
    cin.ignore(0,'\n');
    getline(cin, specificVehicle);

    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun1);

    cout<<"Restaurant: ";
    cin.ignore(0,'\n');
    getline(cin, restaurant);

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective1);

    cout<<"Female celebrity: ";
    cin.ignore(0,'\n');
    getline(cin, femaleCelebrity);

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective2);

    cout<<"Specific building: ";
    cin.ignore(0,'\n');
    getline(cin, specificBuilding);

    cout<<"Verb ending in ing: ";
    cin.ignore(0,'\n');
    getline(cin, verbEndingInIng1);

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective3);

    cout<<"Religion: ";
    cin.ignore(0,'\n');
    getline(cin, religion);

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective4);
    
    cout<<"Verb: ";
    cin.ignore(0,'\n');
    getline(cin, verb);

    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun2);

    cout<<"Number: ";
    cin>>number;
    cin.ignore(1,'\n');
    
    cout<<"Verb ending in ing: ";
    cin.ignore(0,'\n');
    getline(cin, verbEndingInIng2);

    cout<<"Last name: ";
    cin.ignore(0,'\n');
    getline(cin, lastName);

    cout<<"Plural noun: ";
    cin.ignore(0,'\n');
    getline(cin, pluralNoun);

    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun3);

    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun4);

    cout<<"Insult: ";
    cin.ignore(0,'\n');
    getline(cin, insult);

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective5);

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective6);

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective7);

    cout<<"Crazy Taxi\n\n";
    cout<<"I work in "<<city<<" as a taxi driver, I remember the first time I "<<pastTenseVerb<<" up a client. I was driving in my "<<specificVehicle<<" when my "<<noun1<<" beeped, I picked up the reciever and my boss asked me to get a woman from a local "<<restaurant<<".\n";
    cout<<"I drove to the where a/an "<<adjective1<<" woman stumbled into the back seat, the woman turned out to be "<<femaleCelebrity<<". And man she was "<<adjective2<<". She demanded to be taken to her home at the "<<specificBuilding<<".\n";
    cout<<"As I drove she started "<<verbEndingInIng1<<" about how "<<adjective3<<" my driving was, and was questioning the fact as to why I am "<<religion<<". Things got "<<adjective4<<" from there. She demanded that I let her drive or she would "<<verb<<" the company!\n";
    cout<<"So she got behind the "<<noun2<<" and floored it, she swerved through traffic, ran "<<number<<" red lights. Then she decided to go "<<verbEndingInIng2<<". She drove the car through the doors of "<<lastName<<" mall and crashed into a display of "<<pluralNoun<<".\n";
    cout<<"But that did not stop the car. She soon lost her "<<noun3<<" and the car crashed into a "<<noun4<<" store. We bot got out of the car and I yelled at her and called her a/an "<<insult<<". She apologized and she said it was a/an "<<adjective5<<" idea.\n";
    cout<<"And now she has some "<<adjective6<<" Youtube footage for her new film. "<<adjective7<<" Taxi!\n";
}

void SecretAgent(){
    system("CLS");
    string verb1, verb2, verb3, verb4, verb5, verb6, verb7, verb8, verb9, verb10, verb11, verb12, noun1, noun2, noun3, noun4, noun5, noun6, noun7, noun8, adjective1, adjective2, adjective3, adjective4, adjective5, properNoun, location;
    float number; 
    cout<<"Verb: ";
    cin.ignore();
    getline(cin, verb1);

    cout<<"Noun: ";
    cin.ignore(0, '\n');
    getline(cin, noun1);

    cout<<"Number: ";
    cin>>number;
    cin.ignore(1, '\n');

    cout<<"Verb: ";
    cin.ignore(0, '\n');
    getline(cin, verb2);

    cout<<"Adjective: ";
    cin.ignore(0, '\n');
    getline(cin, adjective1);

    cout<<"Noun: ";
    cin.ignore(0, '\n');
    getline(cin, noun2);

    cout<<"Verb: ";
    cin.ignore(0, '\n');
    getline(cin, verb3);

    cout<<"Noun: ";
    cin.ignore(0, '\n');
    getline(cin, noun3);

    cout<<"Adjective: ";
    cin.ignore(0, '\n');
    getline(cin, adjective2);

    cout<<"Proper noun: ";
    cin.ignore(0, '\n');
    getline(cin, properNoun);

    cout<<"Verb: ";
    cin.ignore(0, '\n');
    getline(cin, verb4);

    cout<<"Verb: ";
    cin.ignore(0, '\n');
    getline(cin, verb5);

    cout<<"Verb: ";
    cin.ignore(0, '\n');
    getline(cin, verb6);

    cout<<"Verb: ";
    cin.ignore(0, '\n');
    getline(cin, verb7);

    cout<<"Location: ";
    cin.ignore(0, '\n');
    getline(cin, location);

    cout<<"Adjective: ";
    cin.ignore(0, '\n');
    getline(cin, adjective3);

    cout<<"Noun: ";
    cin.ignore(0, '\n');
    getline(cin, noun4);

    cout<<"Adjective: ";
    cin.ignore(0, '\n');
    getline(cin, adjective4);

    cout<<"Noun: ";
    cin.ignore(0, '\n');
    getline(cin, noun5);

    cout<<"Noun: ";
    cin.ignore(0, '\n');
    getline(cin, noun6);

    cout<<"Adjective: ";
    cin.ignore(0, '\n');
    getline(cin, adjective5);

    cout<<"Verb: ";
    cin.ignore(0, '\n');
    getline(cin, verb8);

    cout<<"Verb: ";
    cin.ignore(0, '\n');
    getline(cin, verb9);

    cout<<"Noun: ";
    cin.ignore(0, '\n');
    getline(cin, noun7);

    cout<<"Verb: ";
    cin.ignore(0, '\n');
    getline(cin, verb10);

    cout<<"Verb: ";
    cin.ignore(0, '\n');
    getline(cin, verb11);

    cout<<"Noun: ";
    cin.ignore(0, '\n');
    getline(cin, noun8);

    cout<<"Verb: ";
    cin.ignore(0, '\n');
    getline(cin, verb12);

    cout<<"Secret Agent\n\n";
    cout<<"My name is Secret Agent "<<verb1<<" from "<<noun1<<" "<<number<<" I have been sent to "<<verb2<<" the "<<adjective1<<" professor before "<<noun2<<" comes.\n";
    cout<<"Part of my job requires "<<verb3<<" all these weapons and "<<noun3<<". So far I flung my "<<adjective2<<" hook over the "<<properNoun<<" and climbed through the window. I need to "<<verb4<<" the "<<verb5<<" room.\n";
    cout<<"I have always "<<verb6<<" if I could get "<<verb7<<" doing this. But I do this to protect the people of the "<<location<<". Besides those "<<adjective3<<" men are no "<<noun4<<" for my "<<adjective4<<" gun and "<<noun5<<" "<<noun6<<" Sharks in the moat may be a "<<adjective5<<" problem but I am "<<verb8<<" and ready.\n";
    cout<<"And now I have "<<verb9<<" the professors "<<noun7<<". This is it, all these years i have caught him. "<<verb10<<" till boss "<<verb11<<" this well agent "<<noun8<<" out and over I'm "<<verb12<<" in.\n";
    //What?
}

void TheBigRace(){
    system("CLS");
    string firstName1, firstName2, firstName3, firstName4, firstName5, firstName6, verb1, verb2, verb3, verb4, verb5, verb6, adjective1, adjective2, adjective3, adjective4, adjective5, adjective6, adjective7, noun1, noun2, noun3, bodyPart1, verbEndingInIng, verbEndingInEd1, verbEndingInEd2, bodyPart2; 
    float  number1, number2;
    cout<<"First name: ";
    cin.ignore();
    getline(cin, firstName1);

    cout<<"Verb: ";
    cin.ignore(0,'\n');
    getline(cin, verb1);

    cout<<"Verb: ";
    cin.ignore(0,'\n');
    getline(cin, verb2);

    cout<<"Number: ";
    cin>>number1;
    cin.ignore(1,'\n');

    cout<<"Number: ";
    cin>>number2;
    cin.ignore(1,'\n');

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective1);

    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun1);

    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun2);

    cout<<"Verb: ";
    cin.ignore(0,'\n');
    getline(cin, verb3);

    cout<<"First name: ";
    cin.ignore(0,'\n');
    getline(cin, firstName2);

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective2);

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective3);

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective4);

    cout<<"Body part: ";
    cin.ignore(0,'\n');
    getline(cin, bodyPart1);

    cout<<"Verb: ";
    cin.ignore(0,'\n');
    getline(cin, verb4);

    cout<<"First name: ";
    cin.ignore(0,'\n');
    getline(cin, firstName3);

    cout<<"Noun: ";
    cin.ignore(0,'\n');
    getline(cin, noun3);

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective5);

    cout<<"Verb ending in ing: ";
    cin.ignore(0,'\n');
    getline(cin, verbEndingInIng);

    cout<<"Verb: ";
    cin.ignore(0,'\n');
    getline(cin, verb5);

    cout<<"First name: ";
    cin.ignore(0,'\n');
    getline(cin, firstName4);

    cout<<"Verb ending in ed: ";
    cin.ignore(0,'\n');
    getline(cin, verbEndingInEd1);

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective6);
    
    cout<<"First name: ";
    cin.ignore(0,'\n');
    getline(cin, firstName5);

    cout<<"Verb ending in ed: ";
    cin.ignore(0,'\n');
    getline(cin, verbEndingInEd2);

    cout<<"First name: ";
    cin.ignore(0,'\n');
    getline(cin, firstName6);

    cout<<"Verb: ";
    cin.ignore(0,'\n');
    getline(cin, verb6);

    cout<<"Adjective: ";
    cin.ignore(0,'\n');
    getline(cin, adjective7);
    
    cout<<"Body part: ";
    cin.ignore(0,'\n');
    getline(cin, bodyPart2);

    cout<<"The Big Race!\n\n";
    cout<<firstName1<<" was feeling really "<<verb1<<" about the "<<verb2<<" annual race. He practiced "<<number1<<" times a day. About "<<number2<<" days later, he was finally ready!\n";
    cout<<"He put on his "<<adjective1<<" "<<noun1<<" "<<noun2<<" and "<<verb3<<" out the door for more practice. When he got there, he met one of the joggers.\n";
    cout<<"Her name was "<<firstName2<<". She has "<<adjective2<<" "<<adjective3<<" hair and was very "<<adjective4<<". He couldn't take his "<<bodyPart1<<" off her.\n";
    cout<<"Finally the race was ready! He "<<verb4<<" over at "<<firstName3<<" then at his "<<noun3<<" then back at her again.\n";
    cout<<"Ready, Set, GO! And they were off!\n";
    cout<<"He was so "<<adjective5<<" from "<<verbEndingInIng<<" all they way there, he "<<verb5<<". "<<firstName4<<" "<<verbEndingInEd1<<" 'I'm too "<<adjective6<<" I can't go on'. "<<firstName5<<" "<<verbEndingInEd2<<" to help and took him home later that thay. She helped him out of her blue car into his house. "<<firstName6<<" thanked her and "<<verb6<<" the "<<adjective7<<" door. She gave him a kiss on the "<<bodyPart2<<" and left.\n";
}