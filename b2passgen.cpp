/**
 ************************************************************************************************************************
 *
 *  @file                   b2passgen.cpp
 *  @brief                  Bomberman 2 password generator
 *  @copyright              2019 Shawn M. Crawford
 *  @date                   January 25th, 2019
 *
 *  @remark Author:         Shawn M. Crawford
 *
 *  @note                   N/A
 *
 ************************************************************************************************************************
 */

/* Includes */
#include <iostream>
#include <sstream>

using namespace std;

/**
 ************************************************************************************************************************
 *
 * @brief   Encodes password
 *
 * @param   num The number to match to the cypher
 *
 * @return  The char matched in the cyper or '0' if not found
 *
 * @note 
 * Cypher
 * 0 = 1
 * 1 = 6
 * 2 = J
 * 3 = 8
 * 4 = B
 * 5 = K
 * 6 = 3
 * 7 = D
 * 8 = H
 * 9 = 4
 * 10 = C
 * 11 = F
 * 12 = G
 * 13 = 7
 * 14 = 5
 * 15 = 2 
 *
 ************************************************************************************************************************
 */
char encodePassword(int num)
{
    char result = '0';

    switch (num)
    {
        case 0:
            result = '1';
            break;
        case 1:
            result = '6';
            break;
        case 2:
            result = 'J';
            break;
        case 3:
            result = '8';
            break;
        case 4:
            result = 'B';
            break;
        case 5:
            result = 'K';
            break;
        case 6:
            result = '3';
            break;
        case 7:
            result = 'D';
            break;
        case 8:
            result = 'H';
            break;
        case 9:
            result = '4';
            break;
        case 10:
            result = 'C';
            break;
        case 11:
            result = 'F';
            break;
        case 12:
            result = 'G';
            break;
        case 13:
            result = '7';
            break;
        case 14:
            result = '5';
            break;
        case 15:
            result = '2';
            break;
        default:
            result = '0';
    }
    return result;
}

/**
 ************************************************************************************************************************
 *
 * @brief   Runs the program
 *
 * @param   N/A
 *
 * @return  N/A
 *
 * @note    N/A
 *
 ************************************************************************************************************************
 */
int main (int argc, char *argv[])
{
    int level = 0;
    int subLevel = 0;
    int blastRange = 0;
    int bombAmount = 0;
    int digit1 = 0;
    int digit2 = 0;
    int digit3 = 0;
    int digit4 = 0;
    int digit5 = 0;
    int digit6 = 0;
    int digit7 = 0;
    int digit8 = 0;
    string input = "";

    cout << "Bomberman 2 password generator v 1.0" << endl;
    cout << "Coded by: sleepy9090" << endl;
    cout << "======================================" << endl;
    cout << endl;

    while (true) {
        cout << "Enter bomb blast length(1..5): ";
        getline(cin, input);

        stringstream myStream(input);
        if (myStream >> blastRange)
        {
            if (blastRange >= 1 && blastRange <= 5)
            {
                break;
            }
        }
        
        cout << "Invalid number, please try again." << endl;
    }

    while (true) {
        cout << "Enter bomb amount (1..8): ";
        getline(cin, input);

        stringstream myStream(input);
        if (myStream >> bombAmount)
        {
            if (bombAmount >= 1 && bombAmount <= 8)
            {
                break;
            }
        }
        
        cout << "Invalid number, please try again." << endl;
    }

    while (true) {
        cout << "Enter level number (1..6): ";
        getline(cin, input);

        stringstream myStream(input);
        if (myStream >> level)
        {
            if (level >= 1 && level <= 6)
            {
                break;
            }
        }
        
        cout << "Invalid number, please try again." << endl;
    }

    while (true) {
        cout << "Enter sublevel number (1..8): ";
        getline(cin, input);

        stringstream myStream(input);
        if (myStream >> subLevel)
        {
            if (subLevel >= 1 && subLevel <= 8)
            {
                break;
            }
        }
        
        cout << "Invalid number, please try again." << endl;
    }

    /* Blast Range */
    switch (blastRange)
    {
    case 1:
        break;
    case 2:
        digit7 = 15;
        digit8 = 1;
        break;
    case 3:
        digit7 = 14;
        digit8 = 2;
        break;
    case 4:
        digit7 = 13;
        digit8 = 3;
        break;
    case 5:
        digit7 = 12;
        digit8 = 4;
        break;
    }

    /* Bomb Amount */
    switch (bombAmount)
    {
    case 1:
        break;
    case 2:
        digit5 = 15;
        digit8 = digit8 + 1;
        break;
    case 3:
        digit5 = 14;
        digit8 = digit8 + 2;
        break;
    case 4:
        digit5 = 13;
        digit8 = digit8 + 3;
        break;
    case 5:
        digit5 = 12;
        digit8 = digit8 + 4;
        break;
    case 6:
        digit5 = 11;
        digit8 = digit8 + 5;
        break;
    case 7:
        digit5 = 10;
        digit8 = digit8 + 6;
        break;
    case 8:
        digit5 = 9;
        digit8 = digit8 + 7;
        break;
    }

    /* Sublevel */
    switch (subLevel)
    {
    case 1:
        break;
    case 2:
        digit3 = digit3 + 15;
        digit8 = digit8 + 1;
        break;
    case 3:
        digit3 = digit3 + 14;
        digit8 = digit8 + 2;
        break;
    case 4:
        digit3 = digit3 + 13;
        digit8 = digit8 + 3;
        break;
    case 5:
        digit3 = digit3 + 12;
        digit8 = digit8 + 4;
        break;
    case 6:
        digit3 = digit3 + 11;
        digit8 = digit8 + 5;
        break;
    case 7:
        digit3 = digit3 + 10;
        digit8 = digit8 + 6;
        break;
    case 8:
        digit3 = digit3 + 9;
        digit8 = digit8 + 7;
        break;
    }

    /* Level */
    switch (level)
    {
    case 1:
        break;
    case 2:
        digit2 = digit2 + 15;
        digit8 = digit8 + 1;
        break;
    case 3:
        digit2 = digit2 + 14;
        digit8 = digit8 + 2;
        break;
    case 4:
        digit2 = digit2 + 13;
        digit8 = digit8 + 3;
        break;
    case 5:
        digit2 = digit2 + 12;
        digit8 = digit8 + 4;
        break;
    case 6:
        digit2 = digit2 + 11;
        digit8 = digit8 + 5;
        break;
    }

    /* Default */
    digit1 = 1;
    digit4 = 1;
    digit6 = 1;

    /* Overflow protection */
    if (digit8 > 15)
    {
        digit8 = digit8 - 16;
    }

    cout << "Generated password: " << digit1 << encodePassword(digit2) << encodePassword(digit3) << digit4 << encodePassword(digit5) << digit6 << encodePassword(digit7) << encodePassword(digit8) << endl;
    return(0);
}

