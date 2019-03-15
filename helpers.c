/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

#include "helpers.h"

//Returns true if value is in array of n values, else false.//
bool search(int value, int values[], int n)
{
    //Searching algorithm
    int l = 0;
    while (n < 0)
    {
        return false;
    }
    while (l <= n)
    {
        int x = l + (n-l)/2;

        // Check if value is present at mid point
        if (values[x] == value)
        {
            return true;
        }

        // If value is greater, ignore left half
        if (values[x] < value)
        {
            l = x + 1;
        }

        // If value is smaller, ignore right half
        else
        {
             n = x - 1;
        }
    }
    return false;
}


//Sorts array of n values//
int targ, j, l;
void sort(int values[], int n)
{
    //Sorting algorithm
    for (l = 1; l < n; l++)
    {
        targ = values[l];
        j = l-1;

        //Move elements that are greater than target, to one position ahead//
        while (j >= 0 && values[j] > targ)
        {
            values[j+1] = values[j];
            j = j-1;
        }
        values[j+1] = targ;
    }
    return;
}
