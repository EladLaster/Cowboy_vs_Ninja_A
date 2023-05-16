#ifndef CHARACTER_H
#define CHARACTER_H

#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include "Point.hpp"

using namespace std;

namespace ariel{
class Character{


        Point location;
        int health;
        string name;

    public:
        
        Character(string name,Point &location,int health);
        bool isAlive();
        double distance(const Character& other);
        void hit(int hurt_point);
        string getName();
        Point getLocation();
        int getHealth();
        string print();
        // ~Character();
};
}

#endif