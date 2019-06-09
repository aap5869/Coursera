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
 * @brief Header file for function declarations
 *
 * <Add Extended Description Here>
 *
 * @author Alex Perkins 
 * @date 09/06/2019 
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Sorts the given array from largest to smallest 
 *
 * Given an array of data and a length, sorts the array from largest to
 * smallest. The zeroth element will be the largest value and the last
 * element (n-1) will be the smallest value. 
 *
 * @param *array The unsigned char pointer to an n-element data array to be
 * 	         sorted 
 * @param *size An unsigned integer as the size of the array
 */
void sort_array(unsigned char *array, unsigned int *size);

/**
 * @brief Finds the maximum of the given array of data 
 *
 * Given an array of data and a length, returns the maximum
 *
 * @param *array The unsigned char pointer to an n-element data array 
 * @param *size An unsigned integer as the size of the array
 * @return The maximum of the data array
 */
unsigned int find_maximum(unsigned char *array, unsigned int *size);

/**
 * @brief Finds the minimum of the given array of data 
 *
 * Given an array of data and a length, returns the minimum
 *
 * @param *array The unsigned char pointer to an n-element data array.
 * @param *size An unsigned integer as the size of the array
 * @return The minimum of the data array
 */
unsigned int find_minimum(unsigned char *array, unsigned int *size);

/**
 * @brief Finds the mean of the given array of data 
 *
 * Given an array of data and a length, returns the mean
 *
 * @param *array The unsigned char pointer to an n-element data array.
 * @param *size An unsigned integer as the size of the array
 * @return The mean of the data array
 */
unsigned int find_mean(unsigned char *array, unsigned int *size);

/**
 * @brief Finds the median of the given array of data 
 *
 * Given an array of data and a length, returns the median
 *
 * @param *array The unsigned char pointer to an n-element data array.
 * @param *size An unsigned integer as the size of the array
 * @return The median of the data array
 */
unsigned int find_median(unsigned char *array, unsigned int *size);

/**
 * @brief Prints the statistics of an array 
 *
 * Prints the minimum, maximum, mean, and median of an array
 *
 * @param *array The unsigned char pointer to an n-element data array.
 * @param *size An unsigned integer as the size of the array
 */
void print_statistics(unsigned int *max, unsigned int *min, unsigned int *mean, unsigned int *median);

/**
 * @brief Prints the array to the screen 
 *
 * Prints the array to the screen 
 *
 * @param *array The unsigned char pointer to an n-element data array.
 * @param *size An unsigned integer as the size of the array
 */
void print_array(unsigned char *array, unsigned int *size);
#endif /* __STATS_H__ */
