#ifndef ERRORS_H
#define	ERRORS_H
#include <string>
#include "ErrorTypes.h"

class Success_C
{
	private:
		static Success_E state;
		Success_C();
		
	public:	
		static Success_E GetSuccess();
		static void SetSuccess(Success_E state);	
		static void PrintSuccess(std :: string walletName = "", 
								char operation = '\0', float amount = 0);
};

class Error_C
{
	private:
		static Error_E state;
		Error_C();
		
	public:	
		static Error_E GetError();
		static void SetError(Error_E state);	
		static void PrintError(std :: string walletName = "", std :: string amount = "");
};

#endif