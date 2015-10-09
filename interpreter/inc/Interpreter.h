#ifndef INTERPRETER_H
#define INTERPRETER_H

<<<<<<< HEAD
#include "Errors.h"
#include "ListOfCommands.h"
#include "Wallet.h"
=======
#include "Errorst.h"
#include "Wallet.h"
//#include "ListOfCommands.h"
>>>>>>> Taskcata

class Interpreter
{
	private:
		Wallet wallet_;
		
	public:
		bool isValidCommand(const std :: string &command);
		void createWallet(std :: string &fileName, std :: string &amount);
		void addIncome(const std :: string &fileName, std :: string &amount);
		char returnOperation(const std :: string &amount);
		bool isValidAmount(const std :: string &amount);
};

#endif
