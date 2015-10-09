#include <iostream>
#include <cstring>
#include <ctime>
#include <fstream>
#include <iomanip>
#include "Wallet.h"
#include "Errorst.h"

using namespace std;

Wallet :: Wallet () 
{
	//cout<<"ceapa lui de wallet";
}

void Wallet :: createNewWalletFile (const std :: string wallet, 
									const char operation, const float amount) 
{
	cout<<"OHOOOOOO "<<wallet<<endl;
	cout<<"OHOOOOOO "<<operation<<endl;
	cout<<"OHOOOOOO "<<amount<<endl;
	
	if (fileExists (wallet.c_str())) {
		//cout<<"Error file allreasy exists : "<<endl;
		Error_C :: SetError(FILE_NAME_ERR);	
		Error_C :: PrintError(wallet.c_str());
	} else {
		ofstream workFile;
		workFile.open(wallet.c_str());
		if (!workFile.good()) {
			//cout<<"Error writing to file : "<<endl;
		Error_C :: SetError(OPEN_FILE_ERR);	
		Error_C :: PrintError(wallet.c_str());
			workFile.close();
		} else {
			//workFile.open();
			workFile << operation;
			workFile <<fixed << setprecision(2) <<amount; 
			workFile << " " <<"RON \n"; 
			workFile.close();
		}
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
		//cout<<"Error the wallet file does not exist : "<<endl;
		Error_C :: SetError(OPEN_FILE_ERR);
	}
}

bool Wallet :: fileExists (const std :: string &fileName) 
{
	ifstream f(fileName.c_str());
    if (f.good()) {
        f.close();
        return true;
    }
    f.close();
    return false;
}


std :: string SplitFilename (const std :: string &str)
{
	size_t found = str.find_last_of("/");
	return str.substr(found+1);
} 

