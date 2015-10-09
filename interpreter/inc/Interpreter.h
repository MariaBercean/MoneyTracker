#ifndef INTERPRETER_H
#define INTERPRETER_H

#include "Error_C.h"
#include "ListOfCommands.h"

class Interpreter
{
	private:
		Wallet wallet_;
		
	public:
		bool isValidCommand(const std :: string &command);
		void createWallet(const std :: string &fileName, const std :: string amount);
		void addIncome(const std :: string &amount);
		char returnOperation(const std :: string amount);
		bool isValidAmount(const std :: string &amount);
};

#endif