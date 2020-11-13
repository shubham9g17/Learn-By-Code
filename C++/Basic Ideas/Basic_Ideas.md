## Basic Ideas 
### Notes
* The comment with the file name in each header or source file is only there for your convenience. in normal coding there is no need to add such comments; it only introduces an unnecessary maintenance overhead when renaming files.
* main() is the only function for which omitting return is equivalent to returning zero. Any other
function with return type int always has to end with an explicit return statement—the compiler shall never
presume to know which value an arbitrary function should return by default.
*  The concrete steps you have to follow to get from your source code to a functioning executable differ
from compiler to compiler. While most of our examples are small enough to compile and link through a series
of command-line instructions, it is probably easier to use a so-called integrated development environment (IDE)
instead. Modern IDEs offer a very user-friendly graphical user interface to edit, compile, link, run, and debug
your programs. 
* Regardless of whether the byte order is bi-endian or little-endian, the bits within each byte are
arranged with the most significant bit on the left and the least significant bit on the right.
* The \t\t escape sequences in Ex1_02 are, strictly speaking, not required either—you could in
principle type tabs in a string literal as well (as in "\"Least 'said' \\\n soonest 'mended'.\"").
Using \t\t is nevertheless recommended; the problem with tabs is that one generally cannot tell the difference
between a tab, " ", and a number of spaces, " ", let alone properly count the number of tabs. Also,
some text editors tend to convert tabs into spaces upon saving. It’s therefore not uncommon for style guides to
require the use of the \t escape sequence in string literals.


### Caution
* There are no spaces between the angle brackets and the standard header file name. With some
compilers, spaces are significant between the angle brackets, < and >; if you insert spaces here, the program
may not compile.
* The main() function must not be defined within a namespace. Things that are not defined in a
namespace exist in the global namespace, which has no name.
* Never write decimal integers in your source code with a leading zero. You'll get a value different
from what you intended!



### Tips
* Do not use names that start with an underscore.
* One of the best tips we can give you regarding good programming style is no doubt to choose clear,
descriptive names for all your variables, functions, and types.






### Summary
* A C++ program consists of one or more functions, one of which is called main().
Execution always starts with main().
* The executable part of a function is made up of statements contained between
braces.
* A pair of curly braces is used to enclose a statement block.
* A statement is terminated by a semicolon.
* Keywords are reserved words that have specific meanings in C++. No entity in your
program can have a name that coincides with a keyword.
* A C++ program will be contained in one or more files. Source files contain the
executable code, and header files contain definitions used by the executable code.
* The source files that contain the code defining functions typically have the extension
.cpp.
* Header files that contain definitions that are used by a source file typically have the
extension .h.
* Preprocessor directives specify operations to be performed on the code in a file. All
preprocessor directives execute before the code in a file is compiled.
* The contents of a header file are added into a source file by an #include
preprocessor directive.
* The Standard Library provides an extensive range of capabilities that supports and
extends the C++ language.
* Access to Standard Library functions and definitions is enabled through including
Standard Library header files in a source file.
* Input and output are performed using streams and involve the use of the insertion
and extraction operators, << and >> . std::cin is a standard input stream that
corresponds to the keyboard. std::cout is a standard output stream for writing text
to the screen. Both are defined in the iostream Standard Library header.
* Object-oriented programming involves defining new data types that are specific to
your problem. Once you’ve defined the data types that you need, a program can be
written in terms of the new data types.
* Unicode defines unique integer code values that represent characters for virtually all
of the languages in the world as well as many specialized character sets. Code values
are referred to as code points. Unicode also defines how these code points may be
encoded as byte sequences.
