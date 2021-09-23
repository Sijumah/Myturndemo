#pragma once

#include "declarations.hpp"
#include <string>
#include "gamestate.hpp"


struct defensive_stance:public card{


defensive_stance():card("Defensive Stance",0,"Taunt. Draw a card."){};

virtual void onplay(gamestate* gamestatee){};
virtual void onturnend(gamestate* gamestatee){};


};

struct shield_block:public card{


shield_block():card("Shield Block",1,"Give 60 shield."){};
};

struct overpower_strike: public card{

overpower_strike():card("Overpower Strike",3,"Deal 30 damage; Weaken."){};


};

struct heroic_charge:public card{

heroic_charge():card("Heroic Charge",0,"Ex: Deal 25 Damage; Stun"){};

};

//squire is level 17



struct squire: public hero{

defensive_stance card1; 
shield_block card2;

squire():hero(std::deque<card>{hero_attack{},hero_attack{},defensive_stance{},shield_block{},overpower_strike{}},
100,heroic_charge{}

){};



};