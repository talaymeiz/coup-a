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

    Game:: Game(){
        this->curnt_turn=-1;
        this->win="0";
    }
    string Game:: turn(){
        return "this->players_[this->curnt_turn]";
    }
    vector<string> Game:: players(){
        return this->players_;
    }
    string Game:: winner(){
        // if{}
        return this->win;
    }

