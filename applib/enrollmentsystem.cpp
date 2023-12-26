//============================================================================
// Name        : enrollment system implementation
// File Desc.  : implement the enrollment system class
// Author(s)   : Yusuf Pisan pisan@uw.edu, Jeffrey Caruso
// Date    	   : Fall 2023 - Winter 2024
//============================================================================

#include "enrollmentsystem.h"
#include "university.h"

#include <cassert>
#include <map>
#include <vector>

using namespace std;

bool EnrollmentSystem::addUniversity(const string &name)
{
    return false;
}

bool EnrollmentSystem::setCurrentUniversity(const string &name)
{
    return false;
}

string EnrollmentSystem::getUniversityName() const
{
    return string();
}

bool EnrollmentSystem::readStudentList(const string &filename)
{
    return false;
}

bool EnrollmentSystem::readCourseList(const string &filename)
{
    return false;
}

bool EnrollmentSystem::readEnrollmentInfo(const string &filename)
{
    return false;
}

bool EnrollmentSystem::dropCourse(int studentID, const string &courseNumber)
{
    return false;
}

bool EnrollmentSystem::addCourse(int studentID, const string &courseNumber)
{
    return false;
}

bool EnrollmentSystem::isInCourse(int studentID, const string &courseNumber) const
{
    return false;
}

string EnrollmentSystem::getEnrolledCourses(int studentID) const
{
    return string();
}

string EnrollmentSystem::getCourseTitle(const string &courseNumber)
{
    return string();
}

string EnrollmentSystem::getClassListByLastName(const string &courseNumber) const
{
    return string();
}

string EnrollmentSystem::getClassListByID(const string &courseNumber) const
{
    return string();
}
