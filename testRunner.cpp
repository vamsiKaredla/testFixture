#include<gtest/gtest.h>
#include "libraryCode.hpp"
#include<iostream>
#include <pthread.h>

TEST(testing, getbalance)
{
	Account account(100);

	int balance = account.getBalance();

	ASSERT_EQ(100,balance);
}

class AccountTestFixture : public testing::TEST{

};

int main(int argc,char **argv)
{
	testing::InitGoogleTest(&argc,argv);

	return RUN_ALL_TESTS();
}