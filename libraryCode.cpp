#include "libraryCode.hpp"

#include <iostream>


Account::Account(int balance):m_balance(balance)
{
	std::cout<<"consturctor called";
}

int Account::getBalance() const 
{
	return m_balance;
}

void Account::depositMoney(int sum)
{
	m_balance+= sum;
}

void Account::withdrawMoney(int sum)
{
	if(m_balance>sum)
	{
		throw std::runtime_error("insufficient balance");
	}
	m_balance-=sum;
}
void Account::transferToAccount(Account& to, int sum)
{
	if(m_balance>sum)
	{
		throw std::runtime_error("insufficient funds");
	}
	m_balance-=sum;
	to.m_balance+=sum;
}

