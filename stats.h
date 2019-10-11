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
 * @file stats.h 
 * @brief the stats header file
 *
 * Includes declaration and description of Stats project's functions
 *
 * @author Ahmed Magdy
 * @date Oct. 2019
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief the print_statistics function
 *
 * prints a formatted string containing the array statistics
 *
 * @param array An Array of unsigned char elements
 * @param size The size of the array in unsigned int
 *
 * @return none
 */
void print_statistics(unsigned char array[], unsigned int size);

/**
 * @brief the print_array function
 *
 * print an array of data in a formatted form
 *
 * @param array the array of data (unsigned char)
 * @param size the size of the array in unsigned int
 *
 * @return none
 */
void print_array(unsigned char array[], unsigned int size);

/**
 * @brief the find_median function
 *
 * Finds the median of an array of data
 *
 * @param array an array of unsigned char data
 * @param size the size of the array in unsigned int
 *
 * @return the unsigned char median of the data
 */
unsigned char find_median(unsigned char array[], unsigned int size);

/**
 * @brief find_mean function
 *
 * Finds the mean of an array of data
 *
 * @param array An array of unsigned char data
 * @param size The size of the array
 *
 * @return The unsigned char mean rounded to the smallest integer
 */
unsigned char find_mean(unsigned char array[], unsigned int size);

/**
 * @brief The find_maximum function
 *
 * Finds the maximum value of unsorted array of data
 *
 * @param array An array of unsigned char data
 * @param size The size of the array in unsigned int
 *
 * @return The maximum value of the array in unsigned char
 */
unsigned char find_maximum(unsigned char array[], unsigned int size);

/**
 * @brief The find_minimum function
 *
 * Finds the minimum value of unsorted array of data
 *
 * @param array An array of unsigned char data
 * @param size The size of the array in unsigned int
 *
 * @return The minimum value of the array in unsigned char
 */
unsigned char find_minimum(unsigned char array[], unsigned int size);

/**
 * @brief The sort_array function
 *
 * Sorts an array of data
 *
 * @param array An array of unsigned char data
 * @param size The size of the array in unsigned int
 *
 * @return none
 */
void sort_array(unsigned char array[], unsigned int size);

#endif /* __STATS_H__ */
