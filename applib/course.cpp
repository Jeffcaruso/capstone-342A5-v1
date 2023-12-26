//============================================================================
// Name        : course implementation
// File Desc.  : implement the course class
// Author(s)   : Yusuf Pisan pisan@uw.edu, Jeffrey Caruso
// Date    	   : Fall 2023 - Winter 2024
//============================================================================

#include "course.h"
#include "student.h"
#include <algorithm>
#include <cassert>
#include <sstream>

using namespace std;

ostream &operator<<(ostream &out, const Course &course) { return out; }
