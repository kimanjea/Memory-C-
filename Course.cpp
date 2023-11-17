//
// Implements the Course Class
//Author: Azhar Amir Kimanje
// Date: 09/23/2021
//DOne but I have failed to commit

#include <assert.h>
#include "Course.h"

Course::Course() {
    //std::cout << " constructor is being called" << std::endl;
    _enrollment = nullptr;
    _numberEnrolled = 0;
}
Course::Course(const Course &course) {
    _enrollment= new Student*[course._numberEnrolled+1];
    _numberEnrolled=course._numberEnrolled;
    for(size_t i =0; i<_numberEnrolled;i++) {
        _enrollment[i]=new Student(*course._enrollment[i]);
    }
//newArray= new Student*(course._numberEnrolled+1);
    /*copyOfArray = new Student*[course._numberEnrolled+1];
    for (size_t i = 0; i < _numberEnrolled; i ++) {

        copyOfArray[i] = new Student(*course._enrollment[i]);
    }
    _enrollment=copyOfArray;*/
   // _numberEnrolled=course._numberEnrolled;
}
Course::~Course() {
    for (size_t i = 0; i < _numberEnrolled; i ++) {
       delete _enrollment[i];
    }
    delete[] _enrollment;
}


void Course::Enroll(const Student& student) {
    Student** copyOfArray;
    Student* copyOfStudent;

    copyOfArray = new Student*[_numberEnrolled+1];
    for (size_t i = 0; i < _numberEnrolled; i ++) {
        copyOfArray[i] = _enrollment[i];
    }
    copyOfStudent = new Student(student);
    copyOfArray[_numberEnrolled++] = copyOfStudent;
    delete[] _enrollment;
    //_enrollment= new Student*[_numberEnrolled++];
    _enrollment = copyOfArray;
}


size_t Course::NumberEnrolled() const {
    return _numberEnrolled;
}
const Student* Course::Enrollment(size_t i) const {
    assert(i < _numberEnrolled);
    return _enrollment[i];
}

const Course &Course::operator=(const Course rhs) {
    if(this!=&rhs){
        Course copy(rhs);
        Student** swap;
        size_t swwap;

        swap=_enrollment;
        _enrollment=copy._enrollment;
        copy._enrollment=swap;

        swwap=_numberEnrolled;
        _numberEnrolled=copy._numberEnrolled;
        copy._numberEnrolled=swwap;
    }
    return *this;
}










