//============================================================================
// Name        : Test1
// Test Desc.  : comprehensive testing of the enrollment system (everything)
// Author      : Yusuf Pisan pisan@uw.edu, Jeffrey Caruso
// Date    	   : Fall 2023 - Winter 2024
//==========================================================n==================

#include <gtest/gtest.h>
#include "applib/enrollmentsystem.h"
#include "applib/course.h"
#include "applib/student.h"
#include "applib/university.h"

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

// check enrollment system (the only & comprehensive test...)
TEST(Test1, testingOutAddContains)
{
	// Initial setup
	// Assert b/c, if these fail, later items make no sense.
	EnrollmentSystem es;
	ASSERT_TRUE(es.addUniversity("UWB"));
	ASSERT_FALSE(es.addUniversity("UWB"));
	ASSERT_TRUE(es.addUniversity("UW Seattle"));
	ASSERT_TRUE(es.addUniversity("UW Tacoma"));
	ASSERT_FALSE(es.setCurrentUniversity("UWx"));
	ASSERT_TRUE(es.setCurrentUniversity("UWB"));
	string expectedAns = "UWB";
	ASSERT_EQ(es.getUniversityName(), expectedAns);


	// Read data
	// Assert b/c, if these fail, later items make no sense.
	ASSERT_TRUE(es.readCourseList("data-courses.txt"));
	ASSERT_TRUE(es.readStudentList("data-students.txt"));
	ASSERT_TRUE(es.readEnrollmentInfo("data-enrollments.txt"));


	// Check courses
	// Expect b/c, if these fail, later items could still at least be somewhat informative.
	EXPECT_FALSE(es.addCourse(999, "CSS342"));
	EXPECT_FALSE(es.addCourse(1070, "CSS3422"));
	EXPECT_FALSE(es.isInCourse(1070, "CSS342"));
	EXPECT_TRUE(es.addCourse(1070, "CSS342"));
	EXPECT_TRUE(es.dropCourse(1070, "CSS343"));
	expectedAns = "Data Structures, Algorithms, and Discrete Mathematics I";
	EXPECT_EQ(es.getCourseTitle("CSS342"), expectedAns);


	// Check enrollments
	// Expect b/c, if these fail, later items could still at least be somewhat informative.
	expectedAns = "[CSS110, CSS173, CSS342]";
	EXPECT_EQ(es.getEnrolledCourses(1070), expectedAns);

	// //option 1, making the entire string written on the same line.
	// //not ideal for legibility, but if it works, could be ok.
	// string c342byLastName = "[Collins, Cassandra (1070), Evans, Juan (1401), Gonzalez, Holly (1223), Henderson, Daniel (1364), Taylor, Alexander (1986), Thompson, Christine (1386), Watson, Alex (1211)]";
	// EXPECT_EQ(es.getClassListByLastName("CSS342"), c342byLastName);
	// string c342byID =	    "[Collins, Cassandra (1070), Watson, Alex (1211), Gonzalez, Holly (1223), Henderson, Daniel (1364), Thompson, Christine (1386), Evans, Juan (1401), Taylor, Alexander (1986)]";
	// EXPECT_EQ(es.getClassListByID("CSS342"), c342byID);

	//maybe any more legible ideas...?
	// //option 2 "" + "" + "";
	// string a = "[Collins, Cassandra (1070), Evans, Juan (1401), Gonzalez, Holly (1223),";
	// string b = " Henderson, Daniel(1364), Taylor, Alexander(1986), Thompson, Christine ";
	// string c = "(1386), Watson, Alex (1211)]";
	// string c342byLastName = a + b + c;

	// EXPECT_EQ(es.getClassListByLastName("CSS342"), c342byLastName);
	// a = "[Collins, Cassandra (1070), Watson, Alex (1211), Gonzalez, Holly ";
	// b = "(1223), Henderson, Daniel (1364), Thompson, Christine (1386), Evans, ";
	// c = "Juan (1401), Taylor, Alexander (1986)]";
	// string c342byID = a + b + c;
	// EXPECT_EQ(es.getClassListByID("CSS342"), c342byID);


	// option 3  R""""( <string> )"""";
	string c342byLastName = R""""(
	[Collins, Cassandra (1070), Evans, Juan (1401), Gonzalez, Holly (1223),
	Henderson, Daniel(1364), Taylor, Alexander(1986), Thompson, Christine
	(1386), Watson, Alex (1211)]
	)"""";
	EXPECT_EQ(es.getClassListByLastName("CSS342"), c342byLastName);
	string c342byID = R""""(
	[Collins, Cassandra (1070), Watson, Alex (1211), Gonzalez, Holly
	(1223), Henderson, Daniel (1364), Thompson, Christine (1386), Evans,
	Juan (1401), Taylor, Alexander (1986)]
	)"""";
	EXPECT_EQ(es.getClassListByID("CSS342"), c342byID);

	//for now, I will use option 3. If that has issues with testing with solution code, move to option 1.
		
}
