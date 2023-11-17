//
// Interface Definition for the Student Class
// Author: Azhar Amir Kimanje
// Date: 09/20/2021
//

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using std::ostream;

class Student {
public:
    Student();
    Student(const Student&);
    Student(const char* name, long id);
    ~Student();
    const Student& operator=(const Student rhs);
    const char* Name() const;
    long Id() const;

    friend ostream& operator<<(ostream& os, const Student& student) {
        os << "Name: " << student._name << ", Id: " << student._id;
        return os;
    }

private:
    char* _name;
    long _id{};
};


#endif //STUDENT_H
