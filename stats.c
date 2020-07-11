/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <Developed the seven functions in the stats.h header files and later called in the main function for respective needs >
 *
 * print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
 * print_array() - Given an array of data and a length, prints the array to the screen
 * find_median() - Given an array of data and a length, returns the median value
 * find_mean() - Given an array of data and a length, returns the mean
 * find_maximum() - Given an array of data and a length, returns the maximum
 * find_minimum() - Given an array of data and a length, returns the minimum
 * sort_array() - Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. 
 * These functions are developed and stored in the <stats.h> header file
 *
 * @author <Shankar Channa>
 * @date <11 Jul 2020 >
 *
 */
#include <stdio.h>
#include "stats.h"
/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

unsigned char min,max;      // I declared two unsigned char as inputs for finding minimum and maximum
float mean,median;          // Similarily I took two float variables as inputs for finding mean and median

print_array(test);          // Printing the given array data on console by calling the print_array function
print_statistics(test);     // Printing the statistics data like mean, median, maximum and minimum values from the given data by calling print_statstics function 
mean=find_mean(test);       // Printing the calculated mean value by using find_mean function
median=find_median(test);   // Printing the calculated medain value by using find_median function
max=find_maximum(test);     // Finding the maximum value of given data and print on the console by  using find_maximum
min=find_minimum(test);     // Finding the minimum value of given data and print on the console by using find_minimum
sort_array(test);           //Sorting the given array data and printing on the console by calling the sort_array function

printf("Minimum=%d\nMaximum=%d\nMean=%.2f\nMedian=%.2f\n",min,max,mean,median);

}


