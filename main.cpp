#include <iostream>
#include <string>

#include "mainheader.h"

using namespace std;

//classes declared
LottoPicker lottopicker;
MainMenuSystem mmm;

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
        cout << "2. Euro Lotto Picker\n" <<endl;

        int choice;

    do {
            cout << "Enter your choice here:  ";
            cin >> choice; 
            if(choice == 1){
                    lottopicker.NationalLottoPicker();  
                break;
            }
            else if(choice == 2){
                    lottopicker.EuroLottoPicker();
                break;
            }else if( choice != 1 || 2){
                cout << "Please enter a valid choice!\n" << endl;
            }
        }while(choice != 1 || 2);       
        
}
