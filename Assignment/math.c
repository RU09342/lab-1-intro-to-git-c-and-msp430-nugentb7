/*
 * math.c
 *
 *  Created on: Sept 8, 2017
 * 	Last Edited: Sept 8, 2017
 *      Author: Brendan Nugent
 */

/* The math function has been implemented to handle the following abilities:
 * + Add (num1 + num2)
	*Returns the sum of num1 and num2
 * - Subtract (num1 - num2)
	*Returns the difference of num1 and num2
 * * Multiply (num1 * num2)
	*Returns the product of num1 and num2
 * / Divide (num1 / num2)
	*Returns the quotient of num1 and num2
 * % Modulus (num1 % num2)
	*Returns the remainder after dividing num1 by num2
 
 
 To use the math function, in C, correctly use its prototype "math(int x, int y, char operator)"
 
 EXAMPLES:
 math(5,2,'*'); This code will return '10'
 math(5,2,'+'); This code will return '7'
 math(5,23,'-'); This code will return '-18'
 math(10,2,'/'); This code will return '5'
 math(10,7,'%'); This code will return '3'
 
 TO USE: ADD '#include "math.h" ' to your program 
 
 PLEASE VIEW MATH.H FOR FURTHER DOCUMENTATION
 
*/



#include "math.h"
#include <stdlib.h>
#include <stdio.h>

int math (int num1, int num2, char operator) {
    if (operator=='+') {
        return num1+num2;
    }
    else if (operator=='-') {
        return num1-num2;
    }
    else if (operator=='*') {
        return num1*num2;
    }
    else if (operator=='/') {
        return num1/num2;
    }
    else if (operator=='%') {
        
        return (num1-(num2*(num1/num2)));
    }
    else{
        printf("Operator not recognized"); //error handler
    }
}