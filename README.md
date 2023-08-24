This repository contains a C program that displays the current time in HH:MM:SS format.
To use this program, first clone the repository to your local machine. Then, open the file in a text editor or IDE.
To run the program, simply execute the code in the terminal.


The first two lines of code, #include <stdio.h> and #include <time.h>, tell the compiler to include the stdio.h and time.h header files. These header files contain the definitions for the printf() and time() functions, which are used in this program.

The third line of code, #include <unistd.h>, tells the compiler to include the unistd.h header file. This header file contains the definition for the sleep() function, which is used to pause the execution of the program for a specified number of seconds.

The main() function is the entry point for the program. It starts by entering an infinite loop. Inside the loop, the program gets the current time using the time() function. The time() function returns the number of seconds since the Unix epoch (January 1, 1970, 00:00:00 UTC).

The program then converts the current time to a human-readable format using the localtime() function. The localtime() function takes a pointer to a time_t variable as its argument and returns a pointer to a struct tm variable. The struct tm variable contains the current time in local time.

The program then prints the current time in HH:MM:SS format using the printf() function. The printf() function takes a format string and a variable number of arguments as its arguments. The format string specifies the format of the output. In this case, the format string is "%02d:%02d:%02d", which tells the printf() function to print the hour, minute, and second in two-digit format.

The fflush() function is used to flush the output buffer. This ensures that the output is displayed immediately.

Finally, the program calls the sleep() function to pause the execution of the program for 1 second. This ensures that the time is updated every second.
