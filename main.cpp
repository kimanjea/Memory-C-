//
// Driver Program for "Handling Memory Correctly" Exercise
// Author: Author: Azhar Amir Kimanje
// Date: 09/23/2021
//

#include <iostream>
using std::cout;
using std::endl;

#include "Course.h"

int main() {
    Course course1;
    Course course2;
    Student student1("Joseph Biden", 1);
    Student student2("Jinping Xi", 2);
    Student student3( "Narendra Modi", 3);
    Student student4( "Vladimir Putin", 4);
// Add another line HERE which creates student5 using YOUR NAME and id = 5
    Student student5( "Azhar Kimanje", 5);

    course1.Enroll(student1);
    course1.Enroll(student2);
    course1.Enroll(student3);
    course1.Enroll(student4);

    cout << "Course1 Enrollment: " ;
    cout << course1 << endl;

    course2 = course1;
    // Add a line HERE to enroll student5 in course2
    course2.Enroll(student5);

    cout << "Course2 Enrollment: " << course2 << endl;

    return 0;
}
