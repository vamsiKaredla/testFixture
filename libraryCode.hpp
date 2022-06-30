#ifndef __Library_code_hpp
#define __Library_code_hpp

class Account
{
	public:
		Account(int balance);
		int getBalance() const;
		void depositMoney(int sum);
		void withdrawMoney(int sum);
		void transferToAccount(Account& to, int sum);
	private:
	      int m_balance;
};

#endif //__Library_code_hpp
