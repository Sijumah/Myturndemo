
//started at 12:30

#include <string>
#include<deque>
#include <array>

#include "declarations.hpp"
struct status_eff{};

struct deck{

std::deque<card*> active_cards; 
std::deque<card*> inactive_cards;
std::array<hero,4> heroes;


};

struct player{

std::string name;
deck player_deck;

};






int main(){






return 0;

};



