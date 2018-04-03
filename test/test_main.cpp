#include "lib.h"

#define BOOST_TEST_MODULE test_main

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(test_suite_main)

BOOST_AUTO_TEST_CASE(test_version_valid)
{
	BOOST_CHECK( (major_version() >= 0) &&  (minor_version() >= 0) && (patch_version() >= 0) );
	BOOST_CHECK( (major_version() >  0) ||  (minor_version() >  0) || (patch_version() >  0) );
}
BOOST_AUTO_TEST_SUITE_END()
