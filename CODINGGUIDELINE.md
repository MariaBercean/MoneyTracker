
# Coding Guideline for MoneyTracker application 
## Authors : Maria Bercean, Catalin Sas, Daniel Malina

###1.	Indentation

		- Basic indentations should be 1 tab or 4 spaces.
		- Line length should be maximum 80 characters. 
		
###2.	Whitespace

		- Conventional operators should be surrounded by a space character. 
		- C++ reserved words should be followed by a white space. 
		- Commas should be followed by a white space. 
		- Colons should be followed by a white space. 
		- Semicolons in for statments should be followed by a space character.
		
###3.	Empty lines

		- Leave an empty line between groups of include statements.
		- Leave an empty line between function implementations.
		- Leave an empyt line between state and behaviour members of a class.
		
###4.	Split lines

		- The incompleteness of split lines must be made obvious
			- Break after a comma.
			- Break after an operator.
			- Align the new line with the beginning of the expression on the 
				previous line.
				
###5.  Brackets

		- when used in block layout the opening bracket should be in the same 
			line but separated with a white space
		- when used in class and function definition the opening bracket 
			should be in a new line but without indentation 
		- in all cases the closing bracket should be on a new line and without
			indentation in respect to the current block

###6.	Naming convention

		- Abbreviations in names should be avoided.
		- Names shold be suggestive
		- Type names must be in mixed case starting with upper case.
		- Variable names must be in mixed case starting with lower case.
		- Private class variables should have underscore suffix.
		- Non-generic variables that have a role should be named by combining 
			the role and the type
		- Named constants (including enumeration values) must be all uppercase 
			using underscore to separate words. (defined, global...)
		- Names representing methods or functions must be verbs and written 
			in mixed case starting with lower case.
		- Global variables should always be referred to using the :: operator.
		- All names should be written in English.
		- The terms get/set must be used where an attribute is accessed directly.
		- Plural form should be used on names representing collections.
		- Where possible variables should be named for general purpose not 
			context specific 
		
###7.	Commnets
		
		- The code should be self-documenting by appropriate name choices and 
			an explicit logical structure, so that minimal commenting will be 
			required
		- All comments should be written in English.
		- Use // for all comments, including multi-line comments.
		- Comments should be included relative to their position in the code.
		- Commnets line length should not exceed 80 characters.
		- Comments for functions should be placed in the header file before 
			the function prototype
		
###8.	Files separation

		- The application should be structured in modules representing 
			different functionalities
		- Separate files for prototypes and implementations should be used
		

		
		
		