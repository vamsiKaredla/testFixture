#include<iostream>

#include "libraryCode.hpp"

int main(int argc, char** argv)
{
	Account account(100);
	std::cout<<"balance in account is == " <<account.getBalance()<<"\n";
	return 0;
}

