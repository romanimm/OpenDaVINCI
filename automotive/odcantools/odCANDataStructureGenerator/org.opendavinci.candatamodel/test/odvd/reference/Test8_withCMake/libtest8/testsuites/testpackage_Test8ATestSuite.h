/*
 * This software is open source. Please see COPYING and AUTHORS for further information.
 *
 * This file is auto-generated. DO NOT CHANGE AS YOUR CHANGES MIGHT BE OVERWRITTEN!
 */

#ifndef TESTPACKAGE_TEST8A_TESTSUITE_H
#define TESTPACKAGE_TEST8A_TESTSUITE_H

#include "cxxtest/TestSuite.h"

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

// core/platform.h must be included to setup platform-dependent header files and configurations.
#include "core/platform.h"
#include "core/strings/StringToolbox.h"

#include "GeneratedHeaders_Test8.h"


class testpackage_Test8A_TestSuite : public CxxTest::TestSuite {

	public:
		void testCreateObject() {
			using namespace testpackage;
	
			Test8A obj1;
			TS_ASSERT(obj1.getAttribute1() == 0);
	
			obj1.setAttribute1(4000);
	
			TS_ASSERT(obj1.getAttribute1() == 4000);
		}
	
		void testCreateAndCopyObject() {
			using namespace testpackage;
	
			Test8A obj1;
			TS_ASSERT(obj1.getAttribute1() == 0);
	
			Test8A obj2(obj1);
			TS_ASSERT(obj1.getAttribute1() == obj2.getAttribute1());
	
			obj1.setAttribute1(4000);
	
			TS_ASSERT(obj1.getAttribute1() == 4000);
	
			Test8A obj3(obj1);
			TS_ASSERT(obj1.getAttribute1() == obj3.getAttribute1());
	
			TS_ASSERT(obj3.getAttribute1() == 4000);
	
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj3.toString()));
		}
	
		void testCreateAndAssignObject() {
			using namespace testpackage;
	
			Test8A obj1;
			TS_ASSERT(obj1.getAttribute1() == 0);
	
			Test8A obj2;
			TS_ASSERT(obj2.getAttribute1() == 0);
	
			obj1.setAttribute1(4000);
	
			TS_ASSERT(obj1.getAttribute1() == 4000);
	
			obj2 = obj1;
			TS_ASSERT(obj1.getAttribute1() == obj2.getAttribute1());
	
			TS_ASSERT(obj2.getAttribute1() == 4000);
	
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}
	
		void testCreateAndSerializeObject() {
			using namespace testpackage;
	
			Test8A obj1;
			TS_ASSERT(obj1.getAttribute1() == 0);
	
			Test8A obj2;
			TS_ASSERT(obj2.getAttribute1() == 0);
	
			obj1.setAttribute1(4000);
	
			TS_ASSERT(obj1.getAttribute1() == 4000);
	
			stringstream sstr;
			sstr << obj1;
			sstr >> obj2;
	
			TS_ASSERT(obj1.getAttribute1() == obj2.getAttribute1());
	
			TS_ASSERT(obj2.getAttribute1() == 4000);
	
			TS_ASSERT(core::strings::StringToolbox::equalsIgnoreCase(obj1.toString(), obj2.toString()));
		}

};

#endif /*TESTPACKAGE_TEST8A_TESTSUITE_H*/
