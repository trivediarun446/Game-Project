// This is file contain the all class of this game 
#include"header_file.h"
using namespace std ; 

// NOw we are declaring the all three class for our game 
class player
// Player class for store detaiks of a player 
{
public:
string name ; 
int id ; 
int runscored ;
int bowlplayed ;
int bowlbolwed ; 
int rungiven ; 
int wicket ; 
player();/*constructor*/
    
};

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

class team 
// Team class define for store the details of the team 
{

public:
string team_name ; 
int teambowlbowled ; 
int teamscored ;
int totalwicket ; 
vector<player>player_details ;
team(); /*constructor */
};

class game
// This game class store the details of the game 
{

public:
game();
       team teamA , teamB ;
       team *bowlling_team , *batting_team ;
       team *bowler ,  *batsman ; 
       bool firstining ; 

};
game::game()
{
  firstining=false ;
  teamA.team_name=" Team-A";
  teamB.team_name="Team-B ";
  
}
