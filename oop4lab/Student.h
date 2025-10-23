#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

class Student {
protected:
    std::string name;
    int age;
    std::string university;

public:
    Student(const std::string& n = "", int a = 0, const std::string& u = "");
    virtual ~Student();

    virtual std::string toString() const;
    virtual void print(std::ostream& os) const;
};

#endif
