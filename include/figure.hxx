#pragma once

#include <iostream>

#include <include/point.hxx>

struct Figure {
    virtual Point figureCenter() const = 0;
    virtual double figureArea() const = 0;
    virtual void printPoints(std::ostream& ) const = 0;

    virtual ~Figure() = default;
};

std::ostream& operator<< (std::ostream& out, Figure const& fig);
std::istream& operator>> (std::istream& in, Figure*& fig);

    
