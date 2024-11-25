// Fig. 2.1: fig02_01.c
// A first program in C.

/*
    This is another method 
    to comment multiple lines.
*/

#include<stdio.h>

/*
    Lines beginning with # are preocessed by the preprocessor 
    before compilation. Line 9 tells the preprocessor to include
    the contents of the standard input/output header (<stdio.h>)
    in the program.
*/

// function main begins program execution
int main(void)
{
    /*
        The parentheses after main indicate that main is a program
        building block called a function. C programs contain one or more 
        functions, one of which must be main. 

        Every program in C begins executing at the function main.

        Functions can return information. The keyword int to the left of main 
        indicated that main "returns" an integer value.

        A left brace, {, begins the body of every function. A corresponding 
        right brace ends each function.
    */

    printf("Welcome to C!\n");

    /*
        The entire line, including the printf function (the "f" stands for
        "formatted"), its argument within the parentheses and the semicolon (;),
        is called a statement.

        Every statement must end with a semicolon (also known as the statement terminator).
    */
} // end function main