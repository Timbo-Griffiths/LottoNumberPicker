#include <iostream>
#include <random>
#include "mainheader.h"

using namespace std;

//classes declared
MainMenuSystem mm;


void EUPicker::EuroLottoPicker(){
    cout << "Euro Lotto Picker Menu" << endl;
    cout << "Please choose from the following options\n" << endl;
    cout << "1. Go Number Picker\n";
    cout << "2. Back\n" <<endl;

    int EUPChoice;
     do {
            cout << "Enter your choice here:  ";
            cin >> EUPChoice; 
            if(EUPChoice == 1){
                EUPicker::EURoll();
                break;
            }
            else if(EUPChoice == 2){
                cout << "back..." << endl;
                mm.MainMenu();
                break;
            }else if(!cin){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Please enter a valid choice!\n" << endl;
            }else{
                cout << "Please enter a valid choice!\n" << endl;
            }
        }while(EUPChoice != 1 || 2);
}


void EUPicker::EURoll(){
    cout << endl;
    cout << "***Euro Lotto Number***" << endl;
    int num[7] = {};
    string numbers[7] = {"Num1", "Num2", "Num3", "Num4", "Num5", "Star1", "Star2"};
    
    for(int j =0; j <7; j++){
        
        cout << numbers[j] << "  " << flush;
    }
    cout << endl;
    bool ranBool;
    do{
        ranBool = false;
        for(int i =0; i < 5; i++){
            
            random_device rd;
            mt19937 random_engine(rd());
            uniform_int_distribution<int> distNum(1, 50);
            num[i] = distNum(rd);
            
                for(int j = 0; j < 5; j++){
                    if(j != i){
                        if(num[i] == num[j]){
                            ranBool = true;
                        }
                    }
                }
        }  
    }while(ranBool == true);
    
    for(int a =0; a<5; a++){
        cout << " " << num[a] << "   " << flush; 
    }

    StarRoll();

    //clearing the array. Not sure if this is needed!!!
    for (int b = 0; b < 7; b++){
        num[b] = '\0';
    }
    
    EUReRoll();
    
    cout << endl;
}

void EUPicker::StarRoll(){

    int star[2] = {};
    bool starBool;
    do{
        starBool = false;
        for(int i =0; i < 2; i++){
            
            random_device rd;
            mt19937 random_engine(rd());
            uniform_int_distribution<int> distNum(1, 12);
            star[i] = distNum(rd);
            
                for(int j = 0; j < 2; j++){
                    if(j != i){
                        if(star[i] == star[j]){
                            starBool = true;
                        }
                    }
                }
        }  
    }while(starBool == true);
    
    for(int c =0; c<2; c++){
        cout << "  " << star[c] << "  " << flush; 
    }
}

void EUPicker::EUReRoll(){

    cout << "\n***Sub-Menu***" << endl;
    cout << "1. Re-roll Numbers\n";
    cout << "2. Return to the main menu\n";
    int SubChoice;
    do {
            cout << "Enter your choice here:  ";
            //cout << "\n" << endl;
            cin >> SubChoice; 
            if(SubChoice == 1){
                EURoll();
                break;
            }
            else if(SubChoice == 2){
                mm.MainMenu();
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