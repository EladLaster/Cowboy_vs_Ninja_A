#include <stdio.h>
#include <iostream>
#include <cmath>
#include "Character.hpp"
#include "Point.hpp"
#include "Ninja.hpp"

using namespace std;

namespace ariel{

    Ninja::Ninja(string name, int health, Point location, int speed):Character(name,location,health),speed(speed){}

    void Ninja::move(Character * other) {
    }

    void Ninja::slash(Character * other) {
    }

    int Ninja::get_speed(){
        return this->speed;
    }
    // Ninja::~Ninja(){}

    string Ninja::print(){
        return "";
    }

    OldNinja::OldNinja(string&& name, Point location):Ninja(name, 150, location, 8) {}

    YoungNinja::YoungNinja(string&& name, Point location):Ninja(name, 100, location, 14) {}

    TrainedNinja::TrainedNinja(string&& name, Point location):Ninja(name, 120, location, 12) {}
}