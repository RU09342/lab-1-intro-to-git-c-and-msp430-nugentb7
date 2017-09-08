#Math Function
###Last Updated: Sept 8, 2017
###Author: Brendan Nugent

##Overview
The math function is a multi-purpose function possessing addition(+), subtraction(-), multiplication(*), division(/) and modulus(%) capabilities. It is intended to be used in a simple, efficient program which requires only integer math.
##Dependencies
The function depends on its own header file, math.h. To use the math function enter the following at the beginning of your program:

'#include "math.h"'


##Prototype
The math function should be used according to the following prototype:

math(num1,num2,'operator')

Examples:
math(10,5,'+'); This will return 15
math(15,10,'-'); This will return 5
math(5,2,'*'); This will return '10'
math(8,4,'/'); This will return '2'
math(10,7,'%'); This will return '3'

##Error Handling
If an unknown operator is entered, the function will return a message stating "Operator not recognized"