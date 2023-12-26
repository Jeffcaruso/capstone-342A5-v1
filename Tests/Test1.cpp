//============================================================================
// Name        : Test1
// Test Desc.  : comprehensive testing of the enrollment system (everything)
// Author      : Yusuf Pisan pisan@uw.edu, Jeffrey Caruso
// Date    	   : Fall 2023
//==========================================================n==================

#include <gtest/gtest.h>
#include "applib/skiplist.h"
#include "applib/random.h"

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

// check enrollment system (the only & comprehensive test...)
TEST(Test1, testingOutAddContains)
{
	// initial setup (use assert in gTest)
	EnrollmentSystem es;
	ASSERT_TRUE(es.addUniversity("UWB"));
	ASSERT_FALSE(es.addUniversity("UWB"));
	ASSERT_TRUE(es.addUniversity("UW Seattle"));
	ASSERT_TRUE(es.addUniversity("UW Tacoma"));
	ASSERT_FALSE(es.setCurrentUniversity("UWx"))
	ASSERT_TRUE(es.setCurrentUniversity("UWB"));
	string expectedAns = "UWB";
	ASSERT_EQ(es.getUniversityName(), expectedAns);


	// // read data (use assert in gTest)
	// assert(es.readCourseList("data-courses.txt"));
	// assert(es.readStudentList("data-students.txt"));
	// assert(es.readEnrollmentInfo("data-enrollments.txt"));


	// // check courses (use expect in gTest)
	// assert(!es.addCourse(999, "CSS342"));
	// assert(!es.addCourse(1070, "CSS3422"));
	// assert(!es.isInCourse(1070, "CSS342"));
	// assert(es.addCourse(1070, "CSS342"));
	// assert(es.dropCourse(1070, "CSS343"));
	// assert(es.getCourseTitle("CSS342") ==
	//        "Data Structures, Algorithms, and Discrete Mathematics I");

	// // check enrollments (use expect in gTest)
	// assert(es.getEnrolledCourses(1070) == "[CSS110, CSS173, CSS342]");
	// string c342byLastName =
	//     "[Collins, Cassandra (1070), Evans, Juan (1401), Gonzalez, Holly
	//     (1223), " "Henderson, Daniel (1364), Taylor, Alexander (1986),
	//     Thompson, Christine "
	//     "(1386), Watson, Alex (1211)]";
	// assert(es.getClassListByLastName("CSS342") == c342byLastName);
	// string c342byID =
	//     "[Collins, Cassandra (1070), Watson, Alex (1211), Gonzalez, Holly "
	//     "(1223), Henderson, Daniel (1364), Thompson, Christine (1386), Evans, "
	//     "Juan (1401), Taylor, Alexander (1986)]";
	// assert(es.getClassListByID("CSS342") == c342byID);
}
