//
//  main.cpp
//  my_custom_functions
//
//  Created by Iansyst Loan on 01/02/2022.
//  Copyright © 2022 Iansyst Loan. All rights reserved.
//

#include <iostream>
#include <cmath>

struct Coord {
    float x;
    float y;
};

// return coordinats
Coord returnCoord(float x_, float y_)
{
    Coord coord_instance;
    coord_instance.x = x_;
    coord_instance.y = y_;
    return coord_instance;
}
// return vector
Coord returnVector(Coord v0, Coord v1)
{
    Coord coord_instance;
    coord_instance.x = v1.x - v0.x;
    coord_instance.y = v1.y - v0.y;
    return coord_instance;
}

// return the dotproduct
float dotProduct(Coord v0,Coord v1) {
    return v0.x * v1.x + v0.y * v1.y;
}

// return magnitude of vector
float magnitude(Coord v)
{
    return sqrt(v.x * v.x + v.y * v.y);
}

// return normalised vector
Coord normalise(Coord v)
{
    float m = magnitude(v);
    Coord coord_instance;
    coord_instance.x = v.x / m;
    coord_instance.y = v.y / m;
    return coord_instance;
}

//returns the distance between two coords
float distance(float x0, float y0, float x1, float y1)
{
    return sqrt((x1 - x0 * x1 - x0) + (y1 - y0 * y1 - y0));
}

//clamp a value to a min and max so the value stays in that constraint.
float clampIt(float value, float min, float max)
{
    return std::min(std::max(value, min), max);
}

int main() {
    //two points
    Coord coord1 = returnCoord(0, 6);
    Coord coord2 = returnCoord(4, 0);
    Coord coord3 = returnCoord(7, 1);
    
    //join the two points to make a vector
    Coord vec1 = returnVector(coord1, coord2);
    Coord vec2 = returnVector(coord1, coord3);
    
    //get the dot product of both vectors
    std::cout << dotProduct(vec1, vec2) <<std::endl;
    return 0;
}
