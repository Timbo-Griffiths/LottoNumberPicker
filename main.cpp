#include <iostream>

using namespace std;



//Functions here.....

//Main Menu
int MainMenu(){
    cout << "***This is the Lotto Pick Console App***\n" << endl;
    cout << "Please choose from the following options\n" << endl;
    cout << "1. National Lotto Picker\n";
    cout << "2. Euro Lotto Picker\n" <<endl;
    int choice;
    do {
            cout << "Enter your choice here:  ";
            cin >> choice; 
            if(choice == 1){
                //NationalLottoPicker();
                break;
            }
            else if(choice == 2){
                //EuroLottoPicker();
                break;
            }else if( choice != 1 || 2){
                cout << "Please enter a valid choice!\n" << endl;
            }
        }while(choice != 1 || 2);
}


int NationalLottoPicker(){
    cout << "National Lotto Picker Menu\n" << endl;
    cout << "Please choose from the following options\n" << endl;
    cout << "1. Go Number Picker\n";
    cout << "2. Back\n" <<endl;

    int NLPChoice;
     do {
            cout << "Enter your choice here:  ";
            cin >> NLPChoice; 
            if(NLPChoice == 1){
                //NationalLottoPicker();
                cout << "Lotto numbers: " << endl;
                break;
            }
            else if(NLPChoice == 2){
                MainMenu();
                break;
            }else if( NLPChoice != 1 || 2){
                cout << "Please enter a valid choice!\n" << endl;
            }
        }while(NLPChoice != 1 || 2);
}

//
void EuroLottoPicker(){
    cout << "Euro Lotto Picker Menu" << endl;
}

//Main Int.....
int main(){
    //Main Menu Function
    MainMenu();
    

    
}