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
	// Initial setup (use assert in gTest)
	// Assert b/c, if these fail, later items make no sense.
	EnrollmentSystem es;
	ASSERT_TRUE(es.addUniversity("UWB"));
	ASSERT_FALSE(es.addUniversity("UWB"));
	ASSERT_TRUE(es.addUniversity("UW Seattle"));
	ASSERT_TRUE(es.addUniversity("UW Tacoma"));
	ASSERT_FALSE(es.setCurrentUniversity("UWx"))
	ASSERT_TRUE(es.setCurrentUniversity("UWB"));
	string expectedAns = "UWB";
	ASSERT_EQ(es.getUniversityName(), expectedAns);


	// Read data (use assert in gTest)
	// Assert b/c, if these fail, later items make no sense.
	ASSERT_TRUE(es.readCourseList("data-courses.txt"));
	ASSERT_TRUE(es.readStudentList("data-students.txt"));
	ASSERT_TRUE(es.readEnrollmentInfo("data-enrollments.txt"));



	// Check courses (use expect in gTest)
	// Expect b/c, if these fail, later items could still at least be somewhat informative.
	// assert(!es.addCourse(999, "CSS342"));
	// assert(!es.addCourse(1070, "CSS3422"));
	// assert(!es.isInCourse(1070, "CSS342"));
	// assert(es.addCourse(1070, "CSS342"));
	// assert(es.dropCourse(1070, "CSS343"));
	// assert(es.getCourseTitle("CSS342") ==
	//        "Data Structures, Algorithms, and Discrete Mathematics I");

	// Check enrollments (use expect in gTest)
	// Expect b/c, if these fail, later items could still at least be somewhat informative.
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
