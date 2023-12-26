//============================================================================
// Name        : building implementation
// File Desc.  : Basics just to have a build error if some of the common methods are not present. 
// Author(s)   : Yusuf Pisan pisan@uw.edu, Jeffrey Caruso
// Date    	   : Fall 2023 - Winter 2024
//============================================================================

#include "applib/enrollmentsystem.h"
#include "applib/course.h"
#include "applib/student.h"
#include "applib/university.h"

#include <iostream>
#include <sstream>

int main()
{
    // No validation here... (validation done by gTest. tests in Test folder.)
    EnrollmentSystem es;
    es.addUniversity("UWB");
    es.setCurrentUniversity("UWB");

    // read data
    es.readCourseList("data-courses.txt");
    es.readStudentList("data-students.txt");
    es.readEnrollmentInfo("data-enrollments.txt");

    es.addCourse(1070, "CSS342");
    es.getEnrolledCourses(1070);
}

