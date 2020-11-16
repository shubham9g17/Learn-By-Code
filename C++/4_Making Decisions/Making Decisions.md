## Making Decisions
### Notes
* All standard character classification and conversion functions except for isdigit() and isxdigit()
operate according to the rules of the current locale. All examples given in Table 4-2 are for the default, socalled "C" locale, which is a set of preferences similar to those used by English-speaking Americans. The C++
Standard Library offers an extensive library for working with other locales and character sets. You can use these to develop applications that work correctly irrespective of the user’s language and regional conventions. This topic is a bit too advanced for this book, though. Consult a Standard Library reference for more details.
*  You can only switch on values of integral (int, long, unsigned short, etc.), character (char, etc.),
and enumeration types (see Chapter 2). Technically, switching on Boolean values is allowed as well, but instead
of a switch on Booleans, you should just use if/else statements. Unlike some other programming languages,
however, C++ does not allow you to create switch() statements with conditions and labels that contain
expressions of any other type. A switch that branches on different string values, for instance, is not allowed.

### Caution
* The equal-to operator, ==, has two successive equal signs. It’s a common mistake to use one equal sign instead of two to compare for equality. This will not necessarily result in a warning message from the compiler because the expression may be valid but just not what you intended, so you need to take particular
care to avoid this error
* `Never put a semicolon (;) directly after the condition of the if statement. Unfortunately, doing
so compiles without errors (at best, the compiler will issue a warning), but it does not mean at all what was
intended:
if (letter == 'A');
 std::cout << "The first capital, alphabetically speaking.\n";`
* An else always belongs to the nearest preceding if that’s not already spoken for by another
else. The potential for confusion here is known as the dangling else problem.

### Tips
* When combining logical operators, it is recommended to always add parentheses to clarify the code.
Suppose for argument’s sake that the bank’s condition for allowing a loan was as follows:
(age < 30 && income > 25'000) || (age >= 30 && balance > 100'000)

### Summary
* You can compare two values using the comparison operators. This will result in a
value of type bool, which can be either true or false.
* You can convert a bool value to an integer type—true will convert to 1, and false
will convert to 0.
* Numerical values can be converted to type bool—a zero value converts to false, and
any nonzero value converts to true. When a numerical value appears where a bool
value is expected—such as in an if condition—the compiler will insert an implicit
conversion of the numerical value to type bool.
* The if statement executes a statement or a block of statements depending on the
value of a condition expression. If the condition is true, the statement or block
executes. If the condition is false, it doesn’t.
* The if-else statement executes a statement or block of statements when the
condition is true and executes another statement or block when the condition is
false.
* if and if-else statements can be nested
* The logical operators &&, ||, and ! are used to string together more complex logical
expressions. The arguments to these operators must either be Booleans or values
that are convertible to Booleans (such as integral values).
* The conditional operator selects between two values depending on the value of an
expression.
* The switch statement provides a way to select one from a fixed set of options,
depending on the value of an expression of integral or enumeration type.
