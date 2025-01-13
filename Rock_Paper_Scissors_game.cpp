#include <iostream>
#include <ctime>

char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player , char computer);

int main() {
    char player;
    char computer;
    player = getuserchoice();
    std::cout<<"Your choose is: ";
    showchoice(player);
    computer = getcomputerchoice();
    std::cout<<"Computer's choose is: ";
    showchoice(computer);

    choosewinner(player ,computer);
    return 0;
}

char getuserchoice(){
    char player;
    std::cout<<"Rock-Paper-Scissors Game!\n";
    do{
        std::cout<<"Choose one of the following:\n";
        std::cout<<"*************************\n";
        std::cout<<"'r' for rock\n";
        std::cout<<"'p' for paper\n";
        std::cout<<"'s' for scissors\n";
        std::cin>>player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}
char getcomputerchoice(){

    srand(time(0));
    int num = rand()%3+1;

    switch (num){
        case 1: return 'r';
        case 2: return 'p';
        case 3 : return 's';
        
    }
    return 0;
}
void showchoice(char choice){

    switch (choice){
        case 'r':std::cout<<"Rock\n";
            break;
        case 'p': std::cout<<"Paper\n";
            break;
        case 's' : std::cout<<"Scissors\n";
            break;
    }

}
void choosewinner(char player , char computer){
    switch (player){
        case 'r': if(computer == 'r'){
                    std::cout<<"Result :  It's a tie!\n";
                }else if (computer == 'p'){
                    std::cout<<"Result :  You lose!\n";
                }else {
                std::cout << "Result :  You win!\n";
            }
            break;

        case 'p': if(computer == 'r'){
                std::cout<<"Result :  You win!\n";
                }else if (computer == 'p'){
                    std::cout<<"Result :  It's tie!\n";
                }else {
                std::cout << "Result :  You lose!\n";
            }
            break;
        case 's': if(computer == 'r'){
                    std::cout<<"Result :  You lose!\n";
                }else if (computer == 'p'){
                    std::cout<<"Result :  You win!\n";
                }else {
                std::cout << "Result :  It's a tie!\n";
            }
            break;
        }
}

