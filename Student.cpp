//
// Implements the Student Class
// Author: Azhar Amir Kimanje
// Date: 09/23/2021
//

#include <string.h>
#include "Student.h"

Student::Student()  {
    std::cout << "Constructor is being called" << std::endl;
_name=nullptr;
    _id=0;


}
Student::Student(const Student& student) {
    _name = new char[strlen(student._name)+1];
    strcpy(_name, student._name);
 // Student copy(student._name);
   _id=student._id;
}

Student::Student(const char* name, long id) {
    _name = new char[strlen(name)+1];
    strcpy(_name, name);
    _id = id;
}

const char* Student::Name() const {
    return _name;
}

long Student::Id() const {
    return _id;
}

Student::~Student() {
    if(_name!=nullptr)
        delete[] _name;

    //delete[] _name;
    //delete[] _id;
    //std::cout << "Destructor is being called" << std::endl;
}

const Student &Student::operator=(const Student rhs) {
    if(this!=&rhs){
        Student copy(rhs);
        char *swap;
        long swwap;

        swap=_name;
        _name=copy._name;
        copy._name=swap;

        swwap=_id;
        _id=copy._id;
        copy._id=swwap;

    }
    return *this;
}







