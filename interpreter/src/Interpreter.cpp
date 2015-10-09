#include <string>
#include <iostream>

#include "..\inc\Interpreter.h"

using namespace std;

bool Interpreter :: isValidCommand(const string &command)
{
	for(int i = 0; i < validCommands.size(); i++){
		if(validCommands[i].compare(command)){
			return false;
		}
	}
	return true;
}

bool Interpreter :: isValidAmount(const string &amount)
{
	for(int i = 0; i < amount.strlen(); i++)
	{
		if(amount[i] == ',')
			return 0;
	}
	return true;
}

char Interpreter :: returnOperation(const string &amount)
{
	char operation = '\0';
	if(amout[0] == '-'){
		operation = '-';
	}
	else{
		operation = '+';
	}
	return operation;
}

void Interpreter :: createWallet(const string &fileName, const & string amount)
{
	char operation = returnOperation(&amount);
	fileName = fileName + ".txt";
	float amountSum = 0;
	amount.erase(0);
	if(isValidAmount() == 0){
		Error_C :: setError(INVALID_INCOME_ERR);
	}
	else{
		amountSum = atof(amount.c_str());
		wallet_.createFile(fileName, operation, amountSum);
	}
	

}

void Interpreter :: addIncome(const string &amount)
{
	char operation = returnOperation(&amount);
	float amountSum;
	
	if(isValidAmount() == 0){
		Error_C setError(INVALID_INCOME_ERR);
	}
	else if(operation == '-')
	{
		Error_C :: setError(NEG_INCOME_ERR);
	}
	else{
		amountSum = atof(amount.c_str())
		if(amountSum == 0){
			Error_C :: setError(NEG_INCOME_ERR);
		}
		else{
		wallet_.addIncome(operation, amountSum);
		}
	}
}

