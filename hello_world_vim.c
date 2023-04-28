#include <stdio.h>

int main()
{
  printf("Hello World!\nI am learning C.\nAnd it is awesome!");
  return 0;
}

/*
#include <stdio.h>

This line is called a preprocessor directive, and it tells the compiler to include the contents of the standard input/output library stdio.h. This library provides functions such as printf() and scanf() for reading and writing data to the console.
int main() {

This line is the beginning of the main() function, which is the entry point of the program. The int keyword indicates that the function returns an integer value, which is used to indicate the status of the program when it exits. The main() function takes no arguments in this case.
printf("Hello World!");

This line calls the printf() function from the stdio.h library to print the string "Hello World!" to the console. The %s format specifier can be used to print strings.
return 0;

This line returns an integer value of 0 to indicate that the program executed successfully. The return statement is not strictly necessary in this case, since the main() function implicitly returns 0 if there is no return statement.

So, in summary, this program includes the stdio.h library, defines the main() function, calls the printf() function to print "Hello World!" to the console, and returns an integer value of 0 to indicate success.


*/
