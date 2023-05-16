#include "doctest.h"
#include "sources/Character.hpp"
#include "sources/Cowboy.hpp"
#include "sources/Ninja.hpp"
#include "sources/Point.hpp"
#include "sources/Team.hpp"

using namespace std;
using namespace ariel;

// TEST_CASE("check the getter"){

//     Point a(1.5,2.5);
//     Point b(4.1,6.6);
//     Point c(1.1,2.6);


//     Character character("elad",a,100);
//     Cowboy cowboy("david",b);
//     Ninja ninja("lior",200,c,20);
//     Team team(&ninja);
//     team.add(&cowboy);
    
//     CHECK(character.getName()=="elad");
//     CHECK(character.getHealth()==100);
//     CHECK(character.getLocation().get_x()==1.5);
//     CHECK(character.getLocation().get_y()==2.5);
//     CHECK(cowboy.getHealth()==110);
//     CHECK(cowboy.get_boolets()==6);
//     CHECK(ninja.get_speed()==20);

// }

TEST_CASE("check the character class"){
    Point a(1.1,2.6);
    Point b(4.1,6.6);
    Character character1("elad",a,200);
    Character character2("david",a,100);

    CHECK(character1.distance(character2)==5.0);
    CHECK(character1.isAlive());
    CHECK(character2.isAlive());
    character1.hit(50);
    character2.hit(100);
    CHECK(character1.getHealth()==150);
    CHECK(character2.getHealth()==0);
    CHECK(character1.isAlive());
    CHECK(!(character2.isAlive()));
    CHECK(character1.print()=="character: elad , health: 150 , point: (1.1,2.6)");

}

TEST_CASE("check the cowboy class"){
    Point a(1.1,2.6);
    Point b(4.1,6.6);
    Cowboy cowboy1("elad",a);
    Cowboy cowboy2("david",b);

    CHECK(!(cowboy1.hasboolets()));
    CHECK(!(cowboy2.hasboolets()));
    cowboy1.reload();
    cowboy2.reload();
    CHECK(cowboy1.hasboolets());
    CHECK(cowboy2.hasboolets());
    cowboy1.shoot(&cowboy2);
    CHECK(cowboy1.getHealth()==110);
    CHECK(cowboy2.getHealth()==100);
    CHECK(cowboy1.print()=="character: C elad , health: 110 , point: (1.1,2.6)");
    CHECK(cowboy2.print()=="character: C david , health: 100 , point: (4.1,6.6)");

}

TEST_CASE("check the ninja class"){
    Point a(1.1,2.6);
    Point b(4.1,6.0);
    Point c(5.0,6.7);
    Point d(4.9,2.1);
    Point e(4.4,5.5);
    Ninja ninja1("elad",50,a,2);
    Ninja ninja2("david",60,b,1);
    OldNinja OldNinja1("roy",c);
    YoungNinja YoungNinja1("kfir",d);
    TrainedNinja TrainedNinja1("tomer",e);

    CHECK(OldNinja1.get_speed()==8);
    CHECK(OldNinja1.getHealth()==150);
    CHECK(YoungNinja1.get_speed()==14);
    CHECK(OldNinja1.getHealth()==100);
    CHECK(TrainedNinja1.get_speed()==12);
    CHECK(OldNinja1.getHealth()==120);


    ninja1.move(&ninja2);
    ninja1.slash(&ninja2);//can't slash from here
    ninja1.move(&ninja2);
    ninja1.slash(&ninja2);//can slash from here
    CHECK(ninja2.isAlive());
    CHECK(ninja1.getHealth()==20);
    ninja1.slash(&ninja2);//can slash from here
    CHECK(!(ninja2.isAlive()));
    // CHECK(ninja1.print()=="character: N elad , health: 50 , point: ()");
    // CHECK(ninja2.print()=="character: N david , health: 0 , point: ()");


}

TEST_CASE("check the team class"){
    Point a(1.1,2.6);
    Point b(1.2,2.7);
    Point c(4.1,6.0);
    Point d(4.9,2.1);

    Ninja ninja1("elad",250,a,20);
    Cowboy cowboy1("david",b);
    Team team1(&ninja1);
    team1.add(&cowboy1);

    Ninja ninja2("roy",50,c,10);
    Cowboy cowboy2("kfir",d);
    Team team2(&ninja2);
    team2.add(&cowboy2);

    CHECK(team2.stillAlive()==2);
    team1.attack(&team2);//ninja 2 : -10 by cowboy , 0 by ninja 1
    CHECK(team2.stillAlive()==2);
    team1.attack(&team2);//ninja 2 : -10 by cowboy , -40 by ninja 1
    CHECK(team2.stillAlive()==1);

    CHECK(team1.print()=="team 2 : C david , N elad");
    CHECK(team2.print()=="team 2 : C kfir");

}