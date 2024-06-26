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
  ballsbolwed=0;
  ballsplayed=0;
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
int game:: take_user_index_input()
{
     int n ; 
    //  This is the user input of an index of player list 
   while(!(cin >> n)) /*This statement show boolen expression it means that if we give the integer input then it only return the true statement*/
   {
    cin.clear();
   } 
     
}

void game:: select_player()
{

  cout<<endl ;
  cout<<"Here select the member of Team A and Team B"<<endl ;
  for (int i = 0; i < player_per_team; i++)
  {
    // Add players to team A
    cout<<endl<<"select player"<<i+1<<"of team A-";
    int playerIndexTeamA = take_user_index_input() ;
    player team_A_player ;
    team_A_player.id=playerIndexTeamA ;
    team_A_player.name = playerlist[playerIndexTeamA];
    teamA.player_details.push_back(team_A_player);

    // Add players to team B
    cout<<endl<<"select player"<<i+1<<"of team B-";
    int playerIndexTeamB = take_user_index_input() ;
    player team_B_player ;
    team_B_player.id=playerIndexTeamB ;
    team_B_player.name = playerlist[playerIndexTeamB];
    teamB.player_details.push_back(team_B_player);

  }
  
}
game::game()
{
  firstining=false ;
  teamA.team_name=" Team-A";
  teamB.team_name="Team-B ";
  maxballs= 6;
  max_player=11;
  player_per_team=4;
  playerlist[0]="Rohit";
  playerlist[1]="Dhawan";
  playerlist[2]="Virat";
  playerlist[3]="Raina";
  playerlist[4]="Dhoni";
  playerlist[5]="Tiwariji";
  playerlist[6]="Hardik";
  playerlist[7]="Sami";
  playerlist[8]="Jadeja";
  playerlist[9]="Ishant";
  playerlist[10]="Bumrah";
  
}
