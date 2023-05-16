#ifndef TEAM_H
#define TEAM_H

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Point.hpp"
#include "Character.hpp"
#include "Ninja.hpp"
#include "Cowboy.hpp"

using namespace std;

namespace ariel{

class Team {
//     protected:
        Character * leader;
        vector<Character*> team;

    public:

        Team(Character * leader);
        Team(Team *other);
        void add(Character * other);
        void attack(Team * other);
        int stillAlive();
        string print();
        // ~Team();
};
class Team2: public Team{
        
        public:
        Team2(Character *leader2);
        // ~Team2();
};
class SmartTeam: public Team{
      
        public:
        SmartTeam(Character* leader_smart);
        // ~SmartTeam();
};
}
#endif