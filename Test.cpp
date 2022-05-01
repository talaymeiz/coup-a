#include "doctest.h"
#include <string>
#include <algorithm>
using namespace std;

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

namespace coup{

    Game game_1{};

	Duke duke{game_1, "Moshe"};
	Assassin assassin{game_1, "Yossi"};
	// Ambassador ambassador{game_1, "Meirav"};
	// Captain captain{game_1, "Reut"};
	// Contessa contessa{game_1, "Gilad"};

// TEST_CASE("test Game"){

//     CHECK_EQ(true,game_1.turn()>=0);
    // CHECK_EQ(true,game_1.turn<=6);
    // CHECK_EQ(game_1.players()[0],"Moshe");
    // CHECK_THROWS(game_1.winner());
    
// }
TEST_CASE("test Player"){

    duke.income();
    CHECK_EQ(duke.coins(),1);
    duke.foreign_aid();
    CHECK_EQ(duke.coins(),3);
    CHECK_THROWS(duke.coup(assassin));
    CHECK_EQ(duke.role(),"Duke");
    CHECK_EQ(duke.coins(),3);
    
}
TEST_CASE("test Duke"){

    duke.block(assassin);
    CHECK_THROWS(assassin.foreign_aid());
    duke.tax();
    CHECK_EQ(duke.coins(),6);
    
}

TEST_CASE("test Player"){

    duke.income();
    CHECK_EQ(duke.coins(),1);
    duke.foreign_aid();
    CHECK_EQ(duke.coins(),3);
    CHECK_THROWS(duke.coup(assassin));
    CHECK_EQ(duke.role(),"Duke");
    CHECK_EQ(duke.coins(),3);
    
}TEST_CASE("test Player"){

    duke.income();
    CHECK_EQ(duke.coins(),1);
    duke.foreign_aid();
    CHECK_EQ(duke.coins(),3);
    CHECK_THROWS(duke.coup(assassin));
    CHECK_EQ(duke.role(),"Duke");
    CHECK_EQ(duke.coins(),3);
    
}TEST_CASE("test Player"){

    duke.income();
    CHECK_EQ(duke.coins(),1);
    duke.foreign_aid();
    CHECK_EQ(duke.coins(),3);
    CHECK_THROWS(duke.coup(assassin));
    CHECK_EQ(duke.role(),"Duke");
    CHECK_EQ(duke.coins(),3);
    
}TEST_CASE("test Player"){

    duke.income();
    CHECK_EQ(duke.coins(),1);
    duke.foreign_aid();
    CHECK_EQ(duke.coins(),3);
    CHECK_THROWS(duke.coup(assassin));
    CHECK_EQ(duke.role(),"Duke");
    CHECK_EQ(duke.coins(),3);
    
}


    


}