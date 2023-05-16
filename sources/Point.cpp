#include <stdio.h>
#include <iostream>
#include <cmath>
#include "Point.hpp"

using namespace std;

namespace ariel{
    
    Point::Point(double x_point, double y_point){
        this->x_point=x_point;
        this->y_point=y_point;
    }
    double Point::get_x(){
        return this->x_point;
    }
    double Point::get_y(){
        return this->y_point;
    }
    double Point::distance(const Point& other){
        double dx=this->x_point+other.x_point;
        double dy=this->y_point+other.y_point;
        return sqrt(dx*dx+dy*dy);
    }
    void Point::print(){
        cout<<"("<<this->get_x()<<","<<this->get_y()<<")"<<endl;
    }
    
    Point Point::moveTowards(Point &source, Point &dest, double dist){
    double totalDist=source.distance(dest);
    if(totalDist<=dist) return dest;
    else {
        
        double rat = dist / totalDist;
        double new_x = source.get_x() + (dest.get_x() - source.get_x()) * rat;
        double new_y = source.get_y() + (dest.get_y() - source.get_y()) * rat;

        return Point(new_x, new_y);
    }
    }
    // Point::~Point(){}
}