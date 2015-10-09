#include "Errors.h"
#include <string>
#include <iostream>

//initializing static variable "state" 
Error_E Error_C :: state = IS_OK;

void Error_C :: SetError(Error_E state)
{
	Error_C :: state = state;
}
		
void Error_C :: PrintError()
{
	switch (Error_C :: state)
	{
		case FILE_NAME_ERR:
		std :: cout << "error: wallet " << "wallet1 " << "already exists!";
		break;
		
		case AMOUNT_ERR:
		std :: cout << "error: " << "amount" << " is not a valid initial amount.";
		break;
		
		case COMMAND_ERR:
		std :: cout << "error: invalid command";
		break;
		
		case NO_FILE_NAME_ERR:
		std :: cout << "error: at least filename should be specified.";
		break;
		
		case NEG_INCOME_ERR:
		std :: cout << "error: income should be higher than 0.";
		break;
		
		case INVALID_INCOME_ERR:
		std :: cout << "error: parameter for 'income' should be a positive number";
		break;
		
		case  NO_AMOUNT_ERR:
		std :: cout << "error: no ammount specified for 'income'.";
		break;
		
		case OPEN_FILE_ERR:
		std :: cout << "error: could not open "<< "some.wallet" << 
				       "to register transaction";
		break;
		
		default:
		break;		
	}
}