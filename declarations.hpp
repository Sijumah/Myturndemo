




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






struct hero{

std::deque<card> hero_cards;
int health;
int power;
std::deque<status_eff> status_effects;
gear* equip;

};
