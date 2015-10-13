#ifndef ERRORTYPES_H
#define ERRORTYPES_H

//enumeration with possible succes messages
enum Success_E
{
	IS_EMPTY,
	FILE_CREATED_SUCC
};

//enumeration with possible errors
enum Error_E
{
	IS_OK,
	FILE_NAME_ERR,
	AMOUNT_ERR,
	COMMAND_ERR,
	NO_FILE_NAME_ERR,
	NEG_INCOME_ERR,
	INVALID_INCOME_ERR,
	NO_AMOUNT_ERR,
	OPEN_FILE_ERR,
	INVALID_INITIAL_AMOUNT
};

#endif