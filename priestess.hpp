#pragma once

#include "declarations.hpp"
#include "gamestate.hpp"

struct healing_spell:public card{



healing_spell():card("Healing Spell",1,"Restore 40 health to an ally."){};

};


struct cleansing_touch:public card{



cleansing_touch():card("Cleansing Touch",1,"Dispel debuffs from an ally, or dispell buffs from an enemy."){};

};

struct prayer_of_healing:public card{



prayer_of_healing():card("Prayer of Healing",1,"Restore 20 health to all allies."){};

};


struct holy_redemption:public card{



holy_redemption():card("Holy Redemption",0,"Resurrect an ally and restore 56 health to the target."){};

};


struct priestess: public hero{

priestess():hero(std::deque<card>{hero_attack{},hero_attack{},healing_spell{},cleansing_touch{},prayer_of_healing{}},50,holy_redemption{}){};
};