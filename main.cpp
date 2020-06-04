#include <iostream>
#include <sstream>
#include <limits>

#include "mainheader.h"

using namespace std;

//classes declared
MainMenuSystem mmm;
EUPicker eupicker;
NLPicker nlpicker;

//Prototypes


//Main Int.....
int main(){
    
    //Main Menu Function
    mmm.MainMenu();
   
}


//Functions here.....

//Main Menu
void MainMenuSystem::MainMenu(){
    
        cout << "***This is the Lotto Pick Console App***\n" << endl;
        cout << "Please choose from the following options\n" << endl;
        cout << "1. National Lotto Picker\n";
        cout << "2. Euro Lotto Picker\n";
        cout << "3. Exit Lotto Picker\n" << endl;

        int choice = 0;
    do {
            
            cout << "Enter your choice here:  ";
            cin >> choice; 
            if(choice == 1){
                    nlpicker.NationalLottoPicker();  
                break;
            }
            else if(choice == 2){
                    eupicker.EuroLottoPicker();
                break;
            }else if(choice == 3){
                exit(0);
            }else if(!cin){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Please enter a valid choice!\n" << endl;
                
            }else{
                cout << "Please enter a valid choice!\n" << endl;
            }
        }while(choice != 1 || 2 || 3);       
        
}
