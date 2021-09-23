#pragma once


#include "declarations.hpp"
#include "gamestate.hpp"

struct ice_scroll:public card{

ice_scroll():card("Ice Scroll",3,"Deal 20 Ice Damage; chant."){};

void onplay(gamestate*){};


};

struct fire_scroll:public card{

fire_scroll():card("Fire Scroll",3,"Deal 20 fire damage; chant."){};

void onplay(gamestate*){};


};

struct lightning_scroll:public card{

lightning_scroll():card("Lightning Scroll",3,"Deal 20 damage to all enemies; chant."){};

void onplay(gamestate*){};


};

struct emenation:public card{

emenation():card("Emenation",0,"Increase your atack by 1 and add 3 different element scrolls to your hand. Reduce their cost to 0."){};

void onplay(gamestate*){};


};



struct apprentice: public hero{

apprentice():hero(std::deque<card>{hero_attack{},hero_attack{},fire_scroll{},ice_scroll{},lightning_scroll{}},50,emenation{}){};
};

