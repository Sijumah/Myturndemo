#pragma once

#include <deque>
#include <string>
#include "gear.hpp"

struct status_eff{};

struct gamestate;


struct card{

std::string name;
unsigned int manacost;
std::string description;

card(const std::string& supname, const unsigned int& supmanacost, const std::string& supdescription):
name(supname), manacost(supmanacost), description(supdescription){};

virtual void onplay(gamestate* gamestatee){};
virtual void onturnend(gamestate* gamestatee){};
};

struct hero_attack:public card{

hero_attack():card("Attack",0,"Deal 20 damage. Gain 20 energy."){};
virtual void onplay(gamestate* gamestatee){};
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
hero(const std::deque<card> supherocards,int supmaxhealth,const card& supex,short suppos,short supherolevel):
hero_cards(supherocards),maxhealth(supmaxhealth),power(0),status_effects(std::deque<status_eff>{}),ex(supex),position(suppos),hero_level(supherolevel)
{maxhealth=supmaxhealth+(10*hero_level);
health=maxhealth;
}

};
