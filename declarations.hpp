#pragma once

#include <deque>
#include <string>
#include "gear.hpp"
#include "gamestate.hpp"
#include <array>

struct status_eff{};




struct card{

std::string name;
unsigned int manacost;
std::string description;

card(const std::string& supname, const unsigned int& supmanacost, const std::string& supdescription):
name(supname), manacost(supmanacost), description(supdescription){};

virtual void onplay(gamestate* gamestatee,hero* casting_hero){};
virtual void onturnend(gamestate* gamestatee,hero* casting_hero){};
};

struct hero_attack:public card{

hero_attack():card("Attack",0,"Deal 20 damage. Gain 20 energy."){};
virtual void onplay(gamestate* gamestatee,hero* casting_hero){};
//attacks= 10+hero level

};




struct hero{

std::deque<card> hero_cards;
int maxhealth;
int health;
int power;
short hero_level;
std::deque<status_eff> status_effects;
gear* equip;
card ex;
short position;
hero(const std::deque<card> supherocards,int supmaxhealth,const card& supex):
hero_cards(supherocards),maxhealth(supmaxhealth),power(0),status_effects(std::deque<status_eff>{}),ex(supex)
{maxhealth=supmaxhealth+(10*hero_level);
health=maxhealth;
}

};





struct deck{

std::deque<card*> active_cards; 
std::deque<card*> inactive_cards;
std::array<hero,4> heroes;


};

struct hand{

std::deque<card*> cards;

};



struct player{

std::string player_name;
deck player_deck;
hand player_hand;

};

