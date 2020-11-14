## Working with Fundamental  Data Types
### Notes
* The bitwise complement operator is sometimes called the bitwise NOT operator because for every
bit it operates on, what you get is not what you started with.
* The enumerations we have just described make obsolete the old syntax for enumerations. These are
defined without using the class keyword. For example, the Day enumeration could be defined like this:
enum Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
Your code will be less error prone if you stick to enum class enumeration types, though. For one, old-style
enumerators convert to values of integral or even floating-point types without a cast, which can easily lead to
mistakes. The more strongly typed enum classes are always the better choice over old-style enum types.
* Remember that the lifetime and scope of a variable are different things. Lifetime is the period of
execution time over which a variable survives. Scope is the region of program code over which the variable
name can be used. It’s important not to get these two ideas confused.


### Caution
* auto result{ static_cast<unsigned short>(number << 2) }; // Shift left two bit positions 
The static_cast<> part of the previous statement is required because the expression number << 2 evaluates to a value of type int. This despite the fact that both number is of type short. The reason is that there are technically no mathematical or bitwise operators for integer types smaller than int. If their operands are either char or short, they are always implicitly converted to int first. Signedness is not preserved during this conversion either. Without static_cast<>, your compiler would issue at least a compiler warning to signal the narrowing conversion, or it might even refuse to compile the assignment altogether.
* Do remember, though, that, to turn on the nth bit, you have to shift the value 1 to the left by n-1!
To see this, it’s always easiest to think about what happens if you shift with smaller values: shifting by zero
gives you the first bit, shifting by one the second, and so on.
* It’s easy to fall into the trap of allowing language to make you select the wrong operator. Because
you say “Set italic and bold,” there’s a temptation to use the & operator, but this would be wrong. ANDing the
two masks would result in a value with all bits 0, so you wouldn’t change anything.
### Tips
* Always use the using keyword to define a type alias. In fact, if it weren’t for legacy code, we’d be
advising you to forget the keyword typedef even exists.
*  Common coding and design guidelines dictate that global variables are typically to be avoided, and
with good reason. Global constants are a noble exception to this rule. That is, global variables that are declaredwith the const keyword. It is recommended to define all your constants only once, and global variables are perfectly suited for that

### Summary
* You don’t need to memorize the operator precedence and associativity for all
operators, but you need to be conscious of it when writing code. Always use
parentheses if you are unsure about precedence.
* The type-safe enumerations type are useful for representing fixed sets of values,
especially those that have names, such as days of the week or suits in a pack of
playing cards.
* The bitwise operators are necessary when you are working with flags—single bits
that signify a state. These arise surprisingly often—when dealing with file input and
output, for example. The bitwise operators are also essential when you are working
with values packed into a single variable. One extremely common example thereof is
RGB-like encodings, where three to four components of a given color are packed into
one 32-bit integer value.
* The using keyword allows you to define aliases for other types. In legacy code, you
might still encounter typedef being used for the same purpose.
* By default, a variable defined within a block is automatic, which means that it
exists only from the point at which it is defined to the end of the block in which its
definition appears, as indicated by the closing brace of the block that encloses its
definition.
* Variables can be defined outside of all the blocks in a program, in which case they
have global namespace scope and static storage duration by default. Variables with
global scope are accessible from anywhere within the program file that contains
them, following the point at which they’re defined, except where a local variable
exists with the same name as the global variable. Even then, they can still be reached
by using the scope resolution operator (::).