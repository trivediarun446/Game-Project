// This file contain the main section of the game 
#include"header_file.h"
#include"class_header.h"
using namespace std ; 
void welcome()
{
    cout<<"\t \t \t \t \t \t \t \t Welcome to Virtual Cricket "<<endl ;
    Sleep(2000);
    system("cls");
    cout<<"\t \t \t \t \t \t \t \t \t Instructions "<<endl ; 
   
    cout<<" 1. Per team as only 4 playes "<<endl ;
    cout<<"2. There are only six deliveries "<<endl ;
    cout<<"3. Win the toss and choose your play "<<endl ;
    Sleep(1000);
}
void enterkey()
{
    
    cout<<"Press Enter to continue "<<endl ;
    getch();
}

int main ()
{
    game details ;
    welcome();
    details.show_all_player_name();
    return 0 ;
}