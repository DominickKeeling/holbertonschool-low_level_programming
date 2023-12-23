#include "search_algos.h"

/**
 * binary_search - Write a function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: pointer to the array
 * @size_t: the size of the array
 * @value: the value to search for
 * Return: the index where the value is located. else -1
*/

int binary_search(int *array, size_t size, int value) {
   size_t left, right, mid;

   if (!array) {
       return -1;
   }

   left = 0;
   right = size - 1;

   while (left <= right) {
       mid = left + (right - left) / 2;

       if (array[mid] == value) {
           return mid;
       } else if (array[mid] < value) {
           left = mid + 1;
       } else {
           right = mid - 1;
       }
   }
   return -1;
}
