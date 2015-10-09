#ifndef ERRORS_H
#define	ERRORS_H
#include <string>
#include "ErrorTypes.h"

class Error_C
{
	private:
		static Error_E state;
		
	public:	
		static Error_E GetError();
		static void SetError(Error_E state);	
		static void PrintError(std :: string walletName = "", float amount = 0);
};

#endif