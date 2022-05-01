#include <string>
#include <iostream>
#include<bits/stdc++.h> 
#include <vector>

#pragma once
// #ifndef MY_HHEDER
// #define MY_HHEDER

using namespace std;

namespace coup{

    class Game{
    
    private:
        vector<string> players_; //names
        int curnt_turn;
        // vector<string> states;
        string win;

    public:
        Game();
        string turn();
        vector<string> players();
        string winner();

    };
}

// #endif