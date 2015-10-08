#ifndef INTERPRETER_H
#define INTERPRETER_H

class Interpreter
{
	private:
		
	public:
		bool verifyCommand(const std :: string command);
		void interpretCommand(const int length, const char * commandList[]);
		void createWallet(const std :: string wallet, const char operation, const float amount);
		void addIncome(const float amount);
};

#endif