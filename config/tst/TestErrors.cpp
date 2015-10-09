#include <Errors.h>
#include <iostream>
#include "gtest/gtest.h"

TEST(ErrorTest, FileNameError)
{
	Error_C error;
	error.SetErr(FILE_NAME_ERR);
	ASSERT_EQ(FILE_NAME_ERR, error.GetError());
	
}
	
