#pragma once

#include "declarations.hpp"
#include <deque>


struct event_type{

hero* casting_hero;
unsigned short event_enum;
//0=ex
//1=attack-all
//2=delay_apply

event_type(unsigned short supeventenum,hero* suphero):event_enum(supeventenum),casting_hero(suphero){};

};

struct event_handler{


std::deque<event_type*>events={};




};

event_handler global_event_handler;