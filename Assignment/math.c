#include "math.h"

int math(int num1, int num2, char Operator){
    switch(Operator){
        /* Your assignment is to take the math function and implement at least the following functions:
         * + Add (num1 + num2)
         * - Subtract (num1 - num2)
         * * Multiply (num1 * num2)
         * / Divide (num1 / num2)
         * % Modulus (num1 % num2)
         * < Left Shift (num1 << num2)
         * > Right Shift (num1 >> num2)
         * & Bitwise AND (num1 & num2)
         * | Bitwise OR (num1 | num2)
         * ^ Bitwise XOR (num1 ^ num2)
         * ~ Bitwise Inverse (~num1) for this operation, num1 and num2 are still needed
        */
        case '+':
            return num1 + num2;     // add
        case '-':
            return num1 - num2;     // subtract
        case '*':
            return num1 * num2;     // multiply
        case '/':
            return num1 / num2;     // divide
        case '%':
            return num1 % num2;     // modulo
        case '<':
            return num1 << num2;    // left shift
        case '>':
            return num1 >> num2;    // right shift
        case '&':
            return num1 & num2;     // bitwise and
        case '|':
            return num1 | num2;     // bitwise or
        case '^':
            return num1 ^ num2;     // bitwise xor
        case '~':
            return ~num1;           // bitwise inverse
        default:
            return 0;
    }

}
