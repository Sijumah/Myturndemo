#pragma once

#include "declarations.hpp"
#include "event.hpp"




struct gamestate{

player player1;
player player2;

gamestate(const player& supplayer1,const player& supplayer2):player1(supplayer1),player2(supplayer2){};
    
};
