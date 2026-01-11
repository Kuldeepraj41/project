#include<iostream>
#include<random>
#include<time.h>
using namespace std;
int main(){
    int random;
    srand(time(0));
    random  = rand() % 100 +1;
    cout<<"Rules of the Game:"<<endl;
    cout<<"1. Rock crushes Scissors"<<endl;
    cout<<"2. Scissors cuts Paper"<<endl;
    cout<<"3. Paper covers Rock"<<endl;
    cout<<"4. If both the players choose the same object, it's a tie."<<endl;
    cout<<"use R for Rock"<<endl;
    cout<<"use P for Paper"<<endl;
    cout<<"use S for Scissors"<<endl;
    cout<<"use E to Exit the game"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"GAME STARTS NOW!"<<endl;
    char player ,computer;
    while (true)
    {
        cout<<"Enter your choice (R/P/S/E): ";
        cin>>player;
        if(player=='R' || player=='P' || player=='S'){
            int comp = random;
            if(comp <= 33){
                computer = 'R';
            }
            else if(comp >33 && comp <=66){
                computer = 'P';
            }
            else{
                computer = 'S';
            }
            cout<<"Computer chose: "<<computer<<endl;
            if(player == computer){
                cout<<"It's a tie!"<<endl;
            }
            else if((player == 'R' && computer == 'S') || (player == 'P' && computer == 'R') || (player == 'S' && computer == 'P')){
                cout<<"You win!"<<endl;
            }
            else{
                cout<<"Computer wins!"<<endl;
            }
            
        }else if(player=='E'){
            cout<<"Game Over. Thanks for playing!"<<endl;
            break;
        }else{
            cout<<"Invalid input. Please try again."<<endl;
        }
    }
    
    cout<<random <<endl;
    return 0;
}