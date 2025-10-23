#pragma once
#ifndef ACTOR_H
#define ACTOR_H

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

class Actor {
protected:
    std::string role;
    int experience; 

public:
    Actor(const std::string& r = "", int exp = 0);
    virtual ~Actor();

    virtual std::string toString() const;
    virtual void print(std::ostream& os) const;
};

#endif