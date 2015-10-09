#ifndef WALLET_H
#define WALLET_H

#include <vector>

#include "WalletEntry.h"

class Wallet
{
	private:
		float initialSum_;
		std :: string currency_;
		std::vector<WalletEntry> walletList_; 
	
	public:
		Wallet();
<<<<<<< HEAD
		void createFile()
=======

>>>>>>> Taskcata
		void createNewWalletFile(const std :: string wallet, 
								const char operation, const float amount);
								
		void addIncome(const std :: string wallet, const char operation, 
						const float amount);
						
<<<<<<< HEAD
		bool fileExists (const std::string &fileName);
=======
		bool fileExists (const std :: string &fileName);

		std :: string SplitFilename (const std :: string &str);
>>>>>>> Taskcata
};


#endif