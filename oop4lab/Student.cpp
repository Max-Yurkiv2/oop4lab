#include "Student.h"

Student::Student(const std::string& n, int a, const std::string& u)
    : name(n), age(a), university(u) {}

Student::~Student() {}

std::string Student::toString() const {
    std::ostringstream ss;
    ss << "Student: " << name << ", Age: " << age << ", University: " << university;
    return ss.str();
}

void Student::print(std::ostream& os) const {
    os << toString() << std::endl;
}