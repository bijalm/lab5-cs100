#ifndef __SELECT_TEST_HPP__
#define __SELECT_TEST_HPP__

#include "gtest/gtest.h"

#include <sstream>
#include "spreadsheet.hpp"
#include "spreadsheet.cpp"
#include "select.hpp"
#include "select_contains.hpp"
#include "select_and.hpp"
#include "select_not.hpp"
#include "select_or.hpp"

TEST(PrintTest, Nothing) {
	Spreadsheet input;
	input.set_column_names({});
	input.add_row({});	
	
	Spreadsheet output;
	output.set_column_names({});
	output.add_row({});
	
	std::stringstream in;
	std::stringstream out;
	input.print_selection(in);
	output.print_selection(out);
	EXPECT_EQ(in.str(), out.str());
}


#endif //__SELECT_TEST_HPP__
