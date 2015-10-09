#ifndef WALLET_H
#define WALLET_H

#include <vector>

#include "WalletEntry.h"

class Wallet
{
	private:
		const float initialSum_;
		std :: string currency_;
		vector<WalletEntry> walletList_; 
	
	public:
		void writeToFile();
		Wallet();
		void createFile()
		
	
};


#endif