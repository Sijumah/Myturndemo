#include "declarations.hpp"
#include <string>



struct gear: public card{

gear(const std::string& supname, const unsigned int& supmanacost, const std::string& supdescription):
card(supname,supmanacost,supdescription){};

};

struct reflux_glove: public gear{

reflux_glove():gear("Reflex Glove",3,"Ex now gives 40 energy."){};

};

struct priest_sceptre: public gear{

priest_sceptre():gear("Priest Sceptre",3,"Ex gives 20 energy to other allies."){};

};

struct ward_bracelet: public gear{

ward_bracelet():gear("Ward Bracelet",2,"Attack gives taunt and shield equalling damage dealt."){};    


};


struct lightning_coil: public gear{

lightning_coil():gear("Lightning Coil",2,"At end of turn deal 3* max mana delay damage to enemy with lowest health."){};

};
