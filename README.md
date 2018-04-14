# Functional Specification

# (CMD Calculator)

**Overview**

This document is to provide the details of functioning of CMD Calculator.

CMD Calculator is a calculator which performs basic mathematical calculations
(addition, subtraction, multiplication, division) between two numbers.

It displays a menu asking the user which operation is to be performed.

**Functioning**

```
 Addition- Adds the two numbers provided by the user.
```

 Subtraction- Subtracts the two numbers provided by the user.

 Multiplication- Multiplies the two numbers provided by the user.

 Division- Divides the two numbers provided by the user.


**Requirements**

```
 C++ Compiler: GCC 4.3.
 Platform: Linux 2.6.
 Git
```
**How to Run**

```
 git clone https://github.com/captashish/calculator_myelin.git
 Change directory to calculator_myelin
 Compile calcMain.cpp code
g++ calcMain.cpp –o calcMain
 Execute calcMain
./calcMain
```
**Processing**

```
 calC() : Function which calls the other function required for the
calculation.
 askOption() : Function which displays the menu before the user and
accepts the choice.
 performCalc() : Function which calls the specific operation functions in a
switch case.
 showResult() : Functions which displays the result calculated.
```
**Class Functions**

```
 Calculator() : Constructor of the Class Calculator which initialises the
variable as 0 during the object creation.
 add() : Performs Addition.
 subtract() : Performs subtraction.
 multiply() : Performs Multiplication.
 divide() : Performs division.
```

**Components**

```
File Name File Type Description
Calculator.h Header File Contains declaration of Calculator class
Functions.h Header File Contains the prototype of the functions
used
Calculator.cpp C++ File Contains the definitions of the class
functions
Functions.cpp C++ File Contains the definitions of the functions
used.
calcMain.cpp C++ File Contains main function.
```
**Un-Implemented Features**

```
 Can use makefile.
 Directory structure can be done to store the header files, .cpp files and
binary files separately.
```

