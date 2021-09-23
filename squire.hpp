






//attacks= 10+hero level

struct squire: public hero{

card defensive_stance{"Defensive Stance",0,"Taunt. Draw a card."};    

//shield block, 51 at level 17 so prolly 60, 1 mana
//overpower strike 21 damage weaken 3 mana

////ex heroic charge deal 25 damage stun
virtual void onplay(gamestate* gamestatee){};
virtual void onturnend(gamestate* gamestatee){};
};