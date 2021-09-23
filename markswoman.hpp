#pragma once


#include "declarations.hpp"
#include "gamestate.hpp"

struct frostfire_shot:public card{


frostfire_shot():card("Frostfire Shot",2,"Deal 10 frost fire damage."){};  

void onplay();
};

struct multiple_shots:public card{


multiple_shots():card("Multiple Shots",2,"Deal 20 damage to all enemies, effeced as an attack."){};    
};

struct aimed_shot:public card{


aimed_shot():card("Aimed Shot",3,"Deal 30 damage, gain 30 energy."){};    
};

struct fatal_shot:public card{


fatal_shot():card("Fatal Shot",0,"Deal 60 damage, gain 30 energy."){};    
};




struct markswoman: public hero{

markswoman():hero(std::deque<card>{hero_attack{},hero_attack{},frostfire_shot{},multiple_shots{},aimed_shot{}},60,fatal_shot{}){};


};