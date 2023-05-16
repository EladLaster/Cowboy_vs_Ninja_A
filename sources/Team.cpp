#include <stdio.h>
#include <iostream>
#include <string>
#include "Point.hpp"
#include "Character.hpp"
#include "Team.hpp"

namespace ariel{

    Team::Team(Character * leader):leader(leader){}
    Team::Team(Team * other){}
    void Team ::add(Character * other){}
    void Team ::attack(Team * other){}
    int Team ::stillAlive(){
        return this->team.size();
    }
    string Team ::print(){
        return "";
    }
    // Team::~Team(){}

    Team2::Team2(Character * leader2): Team(leader2){}
    // Team2::~Team2(){}

    SmartTeam::SmartTeam(Character * leader_smart): Team(leader_smart){}
    // SmartTeam::~SmartTeam(){}


}