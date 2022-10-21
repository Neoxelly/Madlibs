#include <iostream>
#include <stdlib.h>
using namespace std;
void SickLetter(){
    system("CLS");
    string lastNameThatsNotYours1, sillyWord1, lastNameThatsNotYours2, illness, noun1, adjective1, adjective2, sillyWord2, place, noun2, lastNameThatsNotYours3;
    float number1, number2;
    cout<<"Last name thats not yours: ";
    cin>>lastNameThatsNotYours1;
    cout<<"Silly Word: ";
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
    cout<<"Mrs. "<<lastNameThatsNotYours3;
}