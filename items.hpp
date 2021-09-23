#include "declarations.hpp"
#include <string>




struct item: public card{

item(const std::string& supname, const unsigned int& supmanacost, const std::string& supdescription):
card(supname,supmanacost,supdescription){}

};

struct health_potion: public item{

//restore 30 + team level
health_potion():
item("Health Potion",0,"Restore 30 + team level health."){};


};

struct shield_device: public item{

shield_device():item("Shield Device",0,"Give all allies 20 shield + team level."){};

};