// This is file contain the all class of this game 
#include"header_file.h"
#include"class_header.h"
using namespace std ; 

// NOw we are declaring the all three class for our game 


player::player()
{
 // making constructor for the class player 
// this constructor give the defult value at the time of declaration of an object 
  runscored=0;
  rungiven=0;
  bowlplayed=0;
  bowlbolwed=0;
  wicket=0;
}

void game :: show_all_player_name()
{
  cout<<"\t \t \t \t \t \t \t \t Total 11 players are :- "<<endl ;
  for (int i = 0; i < max_player; i++)
  {
    cout<<"["<<i<<"]"<<"."<< playerlist[i]<<endl ;
  }
  
}
game::game()
{
  firstining=false ;
  teamA.team_name=" Team-A";
  teamB.team_name="Team-B ";
  maxballs= 6;
  max_player=11;
  per_team_player=4;
  playerlist[0]="Rohit";
  playerlist[1]="Dhawan";
  playerlist[2]="Virat";
  playerlist[3]="Raina";
  playerlist[4]="Dhoni";
  playerlist[5]="Yuvraj";
  playerlist[6]="Hardik";
  playerlist[7]="Sami";
  playerlist[8]="Jadeja";
  playerlist[9]="Ishant";
  playerlist[10]="Bumrah";
  
}
