#include "lists.h"

/**
 * print_list - Write a function that prints all the elements of a list
 * @h: The linked list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
    size_t n;

    for (n = 0; h != NULL; n++)
    {
        if (h->str == NULL)
            printf("[%d] %s\n", 0, "(nil)");
        else
            printf("[%d] %s\n", h->len, h->str);
        h = h->next;
    }
    return (n);
}
