# Assignment 0 - Basic Math Functions

Utilizing a switchcase statement, a simple character determines the result of a mathematical opperation between two integers. The function can be called as follows: int math(int num1, int num2, char Operator); 

num1 is the first integer, num2 is the second integer, and Operator is the character that determines the mathematical function. The operations are done in the following order num1 operator num 2, for example, addition would be num1 + num2 and return the sum of the two integers.

# Character Decoding

The chart below decodes what each character does for the operators. If the operator does not match any of the characters below, the switchcase will return 0.

| Character |     Function    |
|:---------:|:---------------:|
|     +     |       Add       |
|     -     |     Subtract    |
|     *     |     Multiply    |
|     /     |      Divide     |
|     %     |     Modulus     |
|     <     |    Left Shift   |
|     >     |   Right Shift   |
|     &     |   Bitwise AND   |
|     |     |    Bitwise OR   |
|     ^     |   Bitwise XOR   |
|     ~     | Bitwise Inverse |
