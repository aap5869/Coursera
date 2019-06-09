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
 * @file stats.c
 * @brief This file will analyze an array of items and report analytics
 *
 * This file will analyze an array of unsigned int data items and report
 * analytics on maximum, minimum, mean, and median of the data set.
 *
 * @author Alex Perkins
 * @date 02/06/2019
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114,  88,  45,  76, 123,  87,  25,  23,
                              200, 122, 150,  90,  92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned int size = SIZE;
  unsigned int max, min, mean, median;
  /* Statistics and Printing Functions Go Here */

  max = find_maximum(test, &size);
  min = find_minimum(test, &size);
  mean = find_mean(test, &size); 
  sort_array(test, &size);
  median = find_median(test, &size);
  print_statistics(&max, &min, &mean, &median);
  print_array(test, &size);
}

/* Add other Implementation Fstats.c: In function ‘main’:
ile Code Here */

void sort_array(unsigned char *array, unsigned int *size)
{
  unsigned int temp, swaps; 
  do
  {
    swaps = 0;
    for (int i = 0; i < *size - 1; i++)
    {
      if (array[i] < array[i+1])
      {
        temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp; 
	swaps += 1;
      }
    }
  } while (swaps > 0);
}

unsigned int find_maximum(unsigned char *array, unsigned int *size)
{
  unsigned int max = array[0];
  for (int i = 0; i < *size; i++)
  {
    if (array[i] > max) {max = array[i];}
  }
  return max;
}

unsigned int find_minimum(unsigned char *array, unsigned int *size)
{
  unsigned int min = array[0];
  for (int i = 0; i < *size; i++)
  {
    if (array[i] < min) {min = array[i];}
  }
  return min;
}

unsigned int find_mean(unsigned char *array, unsigned int *size)
{
  unsigned int sum = 0;
  unsigned int mean;
  for (int i = 0; i < *size; i++)
  {
    sum += array[i];
  }	  
  mean = sum / *size;
  return mean; 
}

unsigned int find_median(unsigned char *array, unsigned int *size)
{
  unsigned int median;
  if (*size % 2)
  {
    median = array[*size / 2];
  }
  else
  {
    median = (array[*size / 2] + array[*size / 2 - 1]) / 2;
  }
  return median;
}

void print_statistics(unsigned int *max, unsigned int *min, unsigned int *mean, unsigned int *median)
{
  printf("\nMax: %i\nMin: %i\nMean: %i\nMedian: %i\n", *max, *min, *mean, *median);
}

void print_array(unsigned char *array, unsigned int *size)
{
  printf("\nSorted Array\n");
  for (int i = 0; i < *size; i++)
  {
    printf("%i ", array[i]);
  } 
  printf("\n");
}
