// This is file contain the all class of this game
#include "header_file.h"
#include "class_header.h"
using namespace std;

// NOw we are declaring the all three class for our game

player::player()
{
  // making constructor for the class player
  // this constructor give the defult value at the time of declaration of an object
  runscored = 0;
  rungiven = 0;
  ballsbolwed = 0;
  ballsplayed = 0;
  wicket = 0;
}

void game ::show_all_player_name()
{
  cout << "\t \t \t \t \t \t \t \t Total 11 players are :- " << endl;
  for (int i = 0; i < max_player; i++)
  {
    cout << "[" << i << "]" << "." << playerlist[i] << endl;
  }
}
int game::take_user_index_input()
{
  int n;
  //  This is the user input of an index of player list
  while (!(cin >> n)) /*This statement show boolen expression it means that if we give the integer input then it only return the true statement*/
  {
    cin.clear();
  }
}
bool game::validatefunction(int index)
{
  int n ; 
  vector <player> players;
  players = teamA.player_details ;
  n=players.size ();
  for (int  i = 0; i < n; i++)
  {
    if(players[i].id == index)
    {
      return false ;
    }
    }
   players = teamB.player_details ;
  n=players.size ();
  for (int  i = 0; i < n; i++)
  {
    if(players[i].id == index)
    {
      return false ;
    }
  }
}

void game::select_player()
{

  cout << endl;
  cout << "Here select the member of Team A and Team B" << endl;
  for (int i = 0; i < player_per_team; i++)
  {
    
  teamAdeclaration:
    // Add players to team A
    cout << endl
         << "select player" << i + 1 << "of team A-";
    int playerIndexTeamA = take_user_index_input();
    if (playerIndexTeamA > 0 || playerIndexTeamA > 10)
    {
      cout << "enter the valid input" << endl;
      goto teamAdeclaration;
    }
    else if (!validatefunction(playerIndexTeamA))
    {
      cout << "This player is already selected \n";
      goto teamAdeclaration;
    }
    else
    {
      player team_A_player;
      team_A_player.id = playerIndexTeamA;
      team_A_player.name = playerlist[playerIndexTeamA];
      teamA.player_details.push_back(team_A_player);
    }

  // Add players to team B
  teamBdeclaration:
    cout << endl
         << "select player" << i + 1 << "of team B-";

    int playerIndexTeamB = take_user_index_input();
    if (playerIndexTeamB < 0 || playerIndexTeamB > 10)
    {
      cout << "enter the correct value " << endl;
      goto teamBdeclaration;
    }
    else if (!validatefunction(playerIndexTeamB))
    {
      cout << "This player is already selected please select anyother player " << endl;
      goto teamBdeclaration;
    }
    else
    {
      player team_B_player;
      team_B_player.id = playerIndexTeamB;
      team_B_player.name = playerlist[playerIndexTeamB];
      teamB.player_details.push_back(team_B_player);
    }
  }
}
game::game()
{
  isfirstining = false;
  teamA.team_name = " Team-A";
  teamB.team_name = "Team-B ";
  maxballs = 6;
  max_player = 11;
  player_per_team = 4;
  playerlist[0] = "Rohit";
  playerlist[1] = "Dhawan";
  playerlist[2] = "Virat";
  playerlist[3] = "Raina";
  playerlist[4] = "Dhoni";
  playerlist[5] = "Tiwariji";
  playerlist[6] = "Hardik";
  playerlist[7] = "Sami";
  playerlist[8] = "Jadeja";
  playerlist[9] = "Ishant";
  playerlist[10] = "Bumrah";
}
void game :: showallselectedplayer()
{
  vector<player> teamAplayer = teamA.player_details;
  vector<player> teamBplayer = teamB.player_details;
  cout<<"Here the Team A "<<endl ;
  for (int i = 0; i < player_per_team; i++)
  {
    printf("[%d] %d", i,teamAplayer[i]);
  }
  cout<<"Here the Team B "<<endl ;
  for(int i = 0 ; i< player_per_team; i++)
  {
     printf("[%d] %d", i,teamBplayer[i]);
  }
}
void game :: toss()
{
  cout<<"Tossing...."<<endl ;
  int random_value = rand() % 2 ;
  switch (random_value)
  {
  case 0:
    cout<<"Team A won the toss"<<endl ;
    tosschoise(teamA);
    break;
  case 1:
    cout<<"Team B won the toss"<<endl ;
    tosschoise(teamB);
    break;
  
  }
}
void game :: tosschoise(team tosswinnerteam)
{
  cout<<"select the 1 and 2 "<<endl ;
  cout<<" 1 is for batting choise "<<endl ;
  cout<<"2 is for balling choise "<<endl ;

  int tossvalue = take_user_index_input();
  switch (tossvalue)
  {
  case 1:
    cout<<tosswinnerteam.team_name<<"won the toss and choise to bat frist "<<endl ;
    if (tosswinnerteam.team_name.compare("team-A")==0)
    {
      // if Team _ A won the toss 
      bowlling_team=&teamA;
      batting_team=&teamB ;
    }
    else 
    {
      // If team-B won the toss 
      bowlling_team=&teamB;
      batting_team=&teamA;
    }
    break;
  case 2 :
  cout<<tosswinnerteam.team_name<<"won the toss and choise to ball frist "<<endl ;
   if (tosswinnerteam.team_name.compare("team-A")==0)
    {
      // If team -A won the toss 
      bowlling_team=&teamA;
      batting_team=&teamB ;
    }
    else 
    {
      // If team - B won the toss 
      bowlling_team=&teamB;
      batting_team=&teamA;
    }
  default:
  cout<<"please Enter the correct value "<<endl ;
  tosschoise(tosswinnerteam);
    break;
  }

}
void game :: fristiningstart()
{
  isfirstining=true;
  initialisedplayer();
}
void game :: initialisedplayer()
{
  batsman = &batting_team -> player_details[0];
  bowler = &bowlling_team-> player_details[0];

  cout<<batting_team->team_name << batsman -> name << endl ;
  cout<<bowlling_team-> team_name <<bowler -> name << endl ;
}