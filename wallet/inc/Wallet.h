#ifndef WALLET_H
#define WALLET_H

class Wallet
{
	private:
		const float initialSum_;
		long int timestamp_;
		char operation_;
		float amount_;
		std :: string amountType_;
		std :: string currencyType_;
		
	public:
		void writeToFile();
		Wallet();
		
	
};


#endif