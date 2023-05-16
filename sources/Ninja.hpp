#ifndef NINJA_H
#define NINJA_H

#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include "Character.hpp"
#include "Point.hpp"

namespace ariel{
class Ninja : public Character{

//     protected:
        int speed;

    public:
        Ninja (string name,int health,Point location,int speed);
        void move(Character* other);
        void slash(Character* other);
        int get_speed();
        string print();
        // ~Ninja();
};
class OldNinja:public Ninja{
        public:
        OldNinja(string&& name , Point location);
};
class YoungNinja:public Ninja{
        public:
        YoungNinja(string&& name , Point location);
};
class TrainedNinja:public Ninja{
        public:
        TrainedNinja(string&& name , Point location);
};
}
#endif