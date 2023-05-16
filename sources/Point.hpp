#ifndef POINT_H
#define POINT_H

#include <stdio.h>
#include <iostream>

namespace ariel{

class Point{
    
        double x_point;
        double y_point;
    public:
      
        Point(double x_point,double y_point);
        double get_x();
        double get_y();
        double distance(const Point& other);
        void print();
        Point moveTowards(Point& source,Point& dest, double dist);
        // ~Point();
};
}

#endif