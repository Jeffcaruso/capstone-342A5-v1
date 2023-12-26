//============================================================================
// Name        : student declaration
// File Desc.  : declare the student class
// Author(s)   : Yusuf Pisan pisan@uw.edu, Jeffrey Caruso
// Date    	   : Fall 2023 - Winter 2024
//============================================================================

#ifndef STUDENT_H
#define STUDENT_H

#include <fstream>
#include <map>
#include <string>
#include <vector>

using namespace std;

// forward declaration
class Course;

class Student {
  friend class Course;
  friend class University;
  friend class EnrollmentSystem;
  friend ostream &operator<<(ostream &out, const Student &student);

private:
};

#endif