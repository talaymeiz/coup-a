#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"

#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

using namespace coup;

        Player:: Player(Game & game, string name){
            this->game= &game;
            this->name=name;
            this->coin=0;
            this->block_foreign_aid=0;
        }
        void Player:: income (){}
        void Player:: foreign_aid(){}
        void Player:: coup(Player p){}
        string Player:: role(){
            return "no role";
        }
        int Player:: coins(){
            return this->coin;
        }
        void Player:: block(Player p){}
