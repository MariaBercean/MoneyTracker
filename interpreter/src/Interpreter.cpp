#include <string>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include "Interpreter.h"

using namespace std;

bool Interpreter :: isValidCommand(const string &command)
{
	if(command == "create" || command == "income"){
		return true;
	}
	return false;
}


bool Interpreter :: isValidAmount(const string &amount)
{
	for(int i = 0; i < amount.length(); i++)
	{
		if(amount[i] == ',')
			return 0;
	}
	return true;
}

char Interpreter :: returnOperation(const string &amount)
{
	char operation = '\0';
	if(amount[0] == '-'){
		operation = '-';
	}
	else{
		operation = '+';
	}
	return operation;
}

void Interpreter :: createWallet(string &fileName, string &amount)
{
	char operation = returnOperation(amount);
	fileName = fileName + ".txt";
	float amountSum = 0;
	amount.erase(0);
	if(isValidAmount(amount) == 0){
		Error_C :: SetError(INVALID_INCOME_ERR);
	}
	else{
		amountSum = atof(amount.c_str());
		wallet_.createNewWalletFile(fileName, operation, amountSum);
	}
	

}

void Interpreter :: addIncome(const string & fileName, string &amount)
{
	char operation = returnOperation(amount);
	float amountSum;
	amount.erase(0);
	if(isValidAmount(amount) == 0){
		Error_C :: SetError(INVALID_INCOME_ERR);
	}
	else if(operation == '-')
	{
		Error_C :: SetError(NEG_INCOME_ERR);
	}
	else{
		amountSum = atof(amount.c_str());
		if(amountSum == 0){
			Error_C :: SetError(NEG_INCOME_ERR);
		}
		else{
		wallet_.addIncome(fileName, operation, amountSum);
		}
	}
}

