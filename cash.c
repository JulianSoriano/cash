//Pull data from these libraries
#include <cs50.h>
#include <stdio.h>
#include <math.h>
/////////////////////////////////

//main body of code
int main(void)
{

//variables
    float dollars;          //value input by user is a floating variable called dollars
    int cents;              //dollars value converted into an integer called cents
////////////////////////////////////////////////////////////////////////////////////////
    int quarter = 25;                           //value of a quarter is 25
    int quartercount = 0;                       //# of quarters
    int dime = 10;                              //value of a dime is 10
    int dimecount = 0;                          //# of dimes
    int nickel = 5;                             //value of a nickel is 5
    int nickelcount = 0;                        //# of nickels
    int penny = 1;                              //value of a penny is 1.
    int pennycount = 0;                         //# of pennies
    int totalcoins;
////////////////////////////////////////////////////////////////////////////////////////

    //Prompt user for "change owed: " (do while loop using get_float.)
    do
    {
        dollars = get_float("Change owed: ");
    }
    //Must be a positive number.
    while (dollars < 0);
/////////////////////////////////////

    //Convert from dollars to cents (multiply by 100), round, then convert float to integer.
    cents = round(dollars * 100);
/////////////////////////////////////

    //total divided by coin, using floor division to get # of coins that fit into total
    quartercount = floor(cents / quarter);
    //turn remainder into the new total
    cents = cents % quarter;

    //total divided by coin, using floor division to get # of coins that fit into total
    dimecount = floor(cents / dime);
    //turn remainder into the new total
    cents = cents % dime;

    //total divided by coin, using floor division to get # of coins that fit into total
    nickelcount = floor(cents / nickel);
    //turn remainder into the new total
    cents = cents % nickel;

    //remainder is = pennies
    pennycount = cents;

/////////////////////////////////////
    //totalcoins = sum of all coin counts
    totalcoins = quartercount + dimecount + nickelcount + pennycount;

    //printf for output of answer as int of total coins, followed by \n.
    printf("%i\n", totalcoins);
}
