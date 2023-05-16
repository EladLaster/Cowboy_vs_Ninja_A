#include <stdio.h>
#include <iostream>
#include <cmath>
#include "Character.hpp"
#include "Cowboy.hpp"

using namespace std;

namespace ariel{


    Cowboy::Cowboy(string name,Point &location):Character(name,location,110),num_of_bullets(6){}
    void Cowboy:: shoot(Character *other){}
    void Cowboy:: reload(){}
    bool Cowboy:: hasboolets(){
        return true;
    }
    int Cowboy:: get_boolets(){
        return this->num_of_bullets;
    }
    string Cowboy:: print(){
        return "";
    }
    // Cowboy::~Cowboy(){}

}