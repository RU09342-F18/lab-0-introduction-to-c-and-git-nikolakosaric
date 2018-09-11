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
            return num1 + num2;     // returns the sum of num1 and num2
        case '-':
            return num1 - num2;     // returns the difference of num1 and num2
        case '*':
            return num1 * num2;     // returns the product of num1 and num2
        case '/':
            return num1 / num2;     //
        case '%':
            return num1 % num2;     // returns the modulo of num1 and num2
        case '<':
            return num1 << num2;    // left shifts num1 num2 times
        case '>':
            return num1 >> num2;    // right shift num1 num2 times
        case '&':
            return num1 & num2;     // bitwise ands num1 and num2
        case '|':
            return num1 | num2;     // bitwise ors num1 and num2
        case '^':
            return num1 ^ num2;     // bitwise xors num1 and num2
        case '~':
            return ~num1;           // bitwise inverses num1
        default:
            return 0;
    }

}
