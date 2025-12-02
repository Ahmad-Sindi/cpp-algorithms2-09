/* Algorithm Challenge & Problem Solving
 * 9 - Print the Frequency of All Digits in a Number
 *
 * This program reads a positive integer from the user, then analyzes
 * the number digit by digit to determine how many times each digit (0–9)
 * appears in the number.
 *
 * The program uses modulo (%) and integer division to extract digits,
 * and loops through all digits (0–9) to calculate their frequencies.
 */

#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int CountDigitFrequency(short DigitToCheck, int Number)
{
    int FreqCount = 0, Remainder = 0;

    while (Number > 0)
    {
        Remainder = Number % 10; // Extract last digit
        Number = Number / 10;    // Remove last digit

        if (DigitToCheck == Remainder)
        {
            FreqCount++; // Count match
        }
    }

    return FreqCount;
}

void PrintAllDigitsFrequencey(int Number)
{
    cout << endl;

    for (int i = 0; i <= 9; i++) // Loop through digits 0 to 9
    {
        short DigitFrequency = CountDigitFrequency(i, Number);

        // Only print digits that appear at least once
        if (DigitFrequency > 0)
        {
            cout << "Digit " << i << " Frequency is "
                 << DigitFrequency << " Time(s)\n";
        }
    }
}

int main()
{
    int Number = ReadPositiveNumber("Please enter the main number:");
    PrintAllDigitsFrequencey(Number);

    return 0;
}
