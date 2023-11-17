//
// Interface Definition for the Course Class
// Author: Azhar Amir Kimanje
// Date: 09/23/2021
//

#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
using std::ostream;
using std::string;

#include "Student.h"

class Course {
public:
    Course();
    Course(const Course&);
    ~Course();
    const Course& operator=(const Course rhs);
    void Enroll(const Student& student);
    size_t NumberEnrolled() const;
    const Student* Enrollment(size_t i) const;

    friend ostream& operator<<(ostream& os, const Course& course) {
        os << "[";
        for (size_t i = 0; i < course._numberEnrolled; i ++) {
            const Student* student = course._enrollment[i];

            if (i > 0) {
                os << ", ";
            }
            os << "(" << *student << ")";
        }
        os << "]";
        return os;
    }

private:
    Student** _enrollment;
    size_t _numberEnrolled;
};



#endif //COURSE_H
