## Fundamental Datatypes
### Notes
* To represent fractional numbers, you typically use floating-point variables rather than integer.
* You can also use the keywords signed and unsigned on their own. As the type signed is considered shorthand for signed int. So naturally, unsigned is short for unsigned int.
* While mostly optional, there are situations where you do need to add the correct literal suffixes,
such as when you initialize a variable with type auto or when calling overloaded functions with literal arguments.
* You can use a single quote as a separator in any integer literal to make it easier to read. This
includes hexadecimal or binary literals. Here’s an example: 0xFF00'00FF'0001UL or 0b1100'1010'1101.
* You cannot use the unsigned or signed modifiers with floating-point types; floating-point types are
always signed.
* The phenomenon where the result of a subtraction of unsigned integers wraps around to very large
positive numbers is sometimes called underflow. In general, underflow is something to watch out for (we’ll
encounter examples of this in later chapters). Naturally, the converse phenomenon exists as well and is called
overflow. Adding the unsigned char values 253 and 5, for instance, will not give 258—the largest value a
variable of type unsigned char can hold is 255! Instead, the result will be 2, or 258 modulo 256. The outcome
of overflow and underflow with signed integer types is undefined—that is, it depends on the compiler and
computer architecture you are using.


### Caution
* Don’t write decimal integer values with a leading zero. The compiler will interpret such values as
octal (base 8), so a value written as 065 will be the equivalent of 53 in decimal notation.
* `You need to be careful when using braced initializers with the auto keyword. For example,
suppose you write this (notice the equal sign!):
auto m = {10};
Then the type deduced for m will not be int, but instead will be std::initializer_list<int>. To give you
some context, this is the same type you would get if you’d use a list of elements between the braces:
auto list = {1, 2, 3}; // list has type std::initializer_list<int>`


### Tips
* Without extra context or explanation, no one would ever be able to guess this code is about counting
fruit. You should therefore always choose your variable names as self-descriptive as possible. A few words or, if need be, a little paragraph of comments can then do wonders in helping someone understand the code. A little extra effort at the time of writing can considerably speed up future development!
* Only use variables of the unmodified char type to store characters. For char variables that store other
data such as plain integer numbers, you should always add the appropriate sign modifier.
* If nothing else, knowing which variables can and cannot change their values along the way makes
your code easier to follow. So, we recommend you add the const specifier whenever applicable.
* Modify a variable only once as a result of evaluating a single expression and access the prior value of
the variable only to determine its new value—that is, do not attempt to read a variable again after it has been
modified in the same expression.
* The std::round(), lround(), and llround() functions from the cmath
header allow you to round floating-point numbers to the nearest integer. In many cases, this is better than
(implicit or explicit) casting, where truncation is used instead.
* You’ll still see old-style casting used because it’s still part of the language, but we strongly recommend
that you use only the new casts in your code. One should never use C-style casts in C++ code anymore. 

### Summary
* Constants of any kind are called literals. All literals have a type.
* You can define integer literals as decimal, hexadecimal, octal, or binary values.
* A floating-point literal must contain a decimal point or an exponent or both. If there
is neither, you have specified an integer.
* The fundamental types that store integers are short, int, long, and long long. These
store signed integers, but you can also use the type modifier unsigned preceding any
of these type names to produce a type that occupies the same number of bytes but
stores unsigned integers.
* The floating-point data types are float, double, and long double.
* Uninitilized variables generally contain garbage values. Variables may be given
initial values when they’re defined, and it’s good programming practice to do so.
A braced initializer is the preferred way of specifying initial values.
* A variable of type char can store a single character and occupies one byte. Type
char may be signed or unsigned, depending on your compiler. You can also use
variables of the types signed char and unsigned char to store integers. Types char,
signed char, and unsigned char are different types.
* Type wchar_t stores a wide character and occupies either two or four bytes,
depending on your compiler. Types char16_t and char32_t may be better for
handling Unicode characters in a cross-platform manner.
* You can fix the value of a variable by using the const modifier. The compiler will
check for any attempts within the program source file to modify a variable defined as
const.
* The four main mathematic operations correspond to the binary +, -, *, and /
operators. For integers, the modulus operator % gives you the remainder after integer
division.
* The ++ and -- operators are special shorthand for adding or subtracting one from a
numeric variable. Both exist in postfix and prefix forms.
* You can mix different types of variables and constants in an expression. The compiler
will arrange for one operand in a binary operation to be automatically converted to
the type of the other operand when they differ.
* The compiler will automatically convert the type of the result of an expression on the
right of an assignment to the type of the variable on the left where these are different.
This can cause loss of information when the left-side type isn’t able to contain the
same information as the right-side type—double converted to int, for example, or
long converted to short.
* You can explicitly convert a value of one type to another using the static_cast<>()
operator.