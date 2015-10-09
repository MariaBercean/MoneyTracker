#ifndef ERRORS_H
#define	ERRORS_H

#include "ErrorTypes.h"

class Error_C
{
	private:
		static Error_E state;
	
	public:	
		static void SetError(Error_E state);	
		static void PrintError();
};

#endif