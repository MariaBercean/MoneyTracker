#include <iostream>
#include <cstring>
#include <ctime>
#include <fstream>
#include <iomanip>
#include "Wallet.h"
#include "Errors.h"

using namespace std;

Wallet :: Wallet () 
{
	cout<<"ceapa lui de wallet";
}

void Wallet :: createNewWalletFile (const std :: string wallet, 
									const char operation, const float amount) 
{
	if (fileExists (wallet.c_str())) {
		cout<<"Error file allreasy exists : "<<endl;
	} else {
		ofstream workFile;
		workFile.open(wallet.c_str());
		if (workFile.good()) {
			//cout<<"Error writing to file : "<<endl;
		//Error_C :: SetError(FILE_NAME_ERR);	
			workFile.close();
		}
		workFile << operation;
		workFile <<fixed << setprecision(2) <<amount; 
		workFile << " " <<"RON \n"; 
		workFile.close();
	}
}

void Wallet :: addIncome(const std :: string wallet, const char operation, 
				const float amount) 
{
	if (fileExists (wallet.c_str())) {
		ofstream workFile;
		//output.open( filename.c_str(), ios::out | ios::app );
		WalletEntry walletEntry;
		workFile.open(wallet.c_str(),ios::app);
		workFile << walletEntry.getTimestamp () << ";" << operation << ";";
		workFile << fixed << setprecision(2) << amount << ";"; 
		workFile <<"RON \n"; 
		workFile.close();
	} else {
		cout<<"Error the wallet file does not exist : "<<endl;
	}
}

bool Wallet :: fileExists (const std::string &fileName) 
{
	ifstream f(fileName.c_str());
    if (f.good()) {
        f.close();
        return true;
    }
    f.close();
    return false;
}
