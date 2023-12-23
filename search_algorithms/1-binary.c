#include "search_algos.h"

/**
 * binary_search - Write a function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: pointer to the array
 * @size_t: the size of the array
 * @value: the value to search for
 * Return: the index where the value is located. else -1
*/

int binary_search(int *array, size_t size, int value)
{
	int lower, upper, i, mid;

	if (array == NULL || size == 0)
	{
		return -1;
	}

	lower = 0;
	upper = size - 1;

	while (lower <= upper)
	{
		mid = lower + (upper - lower) / 2;

		printf("Searching in array: ");
		for (i = lower; i <= upper; i++)
		{
			printf("%d", array[i]);
			if (i != upper)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return mid;
		else if (array[mid] > value)
			upper = mid - 1;
		else
			lower = mid + 1;
	}

	return -1;
}
