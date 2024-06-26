#include"header_file.h"

class player
// Player class for store detaiks of a player 
{
public:
std ::string name ; 
int id ; 
int runscored ;
int ballsplayed ;
int ballsbolwed ; 
int rungiven ; 
int wicket ; 
player();/*constructor*/
    
};
class team 
// Team class define for store the details of the team 
{

public:
std::string team_name ; 
int teambollsbowled ; 
int team_runs_scored ;
int total_wicket_lost ; 
std::vector<player>player_details ;
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
       int maxballs ;
       int player_per_team ;
       int max_player ; 
       std::string playerlist[11] ;
       void show_all_player_name();
       void select_player();
       int take_user_index_input();
       bool validatefunction(int);
       void showallselectedplayer();
       void toss();
};
