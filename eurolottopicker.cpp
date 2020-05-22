#include <iostream>
#include <string>

#include "mainheader.h"

using namespace std;

//classes declared
MainMenuSystem mm;


void LottoPicker::EuroLottoPicker(){
    cout << "Euro Lotto Picker Menu" << endl;
    cout << "Please choose from the following options\n" << endl;
    cout << "1. Go Number Picker\n";
    cout << "2. Back\n" <<endl;

    int NLPChoice;
     do {
            cout << "Enter your choice here:  ";
            cin >> NLPChoice; 
            if(NLPChoice == 1){
                cout << "elp go number picker..." << endl;
                break;
            }
            else if(NLPChoice == 2){
                cout << "back..." << endl;
                mm.MainMenu();
                break;
            }else if( NLPChoice != 1 || 2){
                cout << "Please enter a valid choice!\n" << endl;
            }
        }while(NLPChoice != 1 || 2);
}