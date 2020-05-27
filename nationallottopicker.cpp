#include <iostream>
#include <random>

#include "mainheader.h"

using namespace std;

//classes declared
MainMenuSystem mms;

void NLPicker::NationalLottoPicker(){
    cout << "National Lotto Picker Menu\n" << endl;
    cout << "Please choose from the following options\n" << endl;
    cout << "1. Go Number Picker\n";
    cout << "2. Back\n" <<endl;

    int NLPChoice;
     do {
            cout << "Enter your choice here:  ";
            cin >> NLPChoice; 
            if(NLPChoice == 1){
                NLRoll();
                break;
            }
            else if(NLPChoice == 2){
                cout << "back......" << endl;
                mms.MainMenu();
                break;
            }else if(!cin){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Please enter a valid choice!\n" << endl;
            }else{
                cout << "Please enter a valid choice!\n" << endl;
            }
        }while(NLPChoice != 1 || 2);
}

void NLPicker::NLRoll(){

    int num[6] = {};
    string numbers[6] = {"Num1", "Num2", "Num3", "Num4", "Num5", "Bonus"};
    cout << "***National Lotto Number***" << endl;
    for(int j =0; j <6; j++){
        
        cout << numbers[j] << "  " << flush;
    }
    cout << endl;
    bool ranBool;
    do{
        ranBool = false;
        for(int i =0; i < 6; i++){
            
            random_device rd;
            mt19937 random_engine(rd());
            uniform_int_distribution<int> distNum(1, 59);
            num[i] = distNum(rd);
            
                for(int j = 0; j < 6; j++){
                    if(j != i){
                        if(num[i] == num[j]){
                            ranBool = true;
                        }
                    }
                }
        }  
    }while(ranBool == true);
    
    for(int a =0; a<6; a++){
        cout << " " << num[a] << "   " << flush; 
    }
    
    //clearing the array. Not sure if this is needed!!!
    for (int b = 0; b < 6; b++){
        num[b] = '\0';
    }
    
    NLReRoll();
    
    cout << endl;
}

void NLPicker::NLReRoll(){

    cout << "\n***Sub-Menu***" << endl;
    cout << "1. Re-roll Numbers\n";
    cout << "2. Return to the main menu\n";
    int SubChoice;
    do {
            cout << "Enter your choice here:  ";
            //cout << "\n" << endl;
            cin >> SubChoice; 
            if(SubChoice == 1){
                NLRoll();
                break;
            }
            else if(SubChoice == 2){
                mms.MainMenu();
                break;
            }else if(!cin){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Please enter a valid choice!\n" << endl;
            }else{
                cout << "Please enter a valid choice!\n" << endl;
            }
        }while(SubChoice != 1 || 2);
}