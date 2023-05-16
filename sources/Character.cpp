#include <stdio.h>
#include <iostream>
#include <cmath>
#include "Character.hpp"
#include "Point.hpp"

using namespace std;

namespace ariel{
    
    Character::Character(string name,Point& loc,int health):location(loc),health(health),name(name){}
    bool Character:: isAlive(){
        return true;
    }
    double Character::distance(const Character& other){
        return location.distance(other.location);
    }
    
    void Character::hit(int hurt_point){
    }
    string Character::getName(){
        return this->getName();
    }
    Point Character::getLocation(){
        return this->getLocation();
    }
    int Character::getHealth(){
        return this->health;
    }
    string Character::print(){
        return "";
    }
    // Character::~Character(){}
}