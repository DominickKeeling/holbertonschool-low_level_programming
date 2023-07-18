#include "lists.h"

/*
* list_len - Write a function that prints all the elements of a list
* @h: the linked list
* Return: nothing
*/

size_t list_len(const list_t *h)
{
    size_t n;

    n = 0;
    while(h != NULL)
    {
        h = h->next;
        n++;
    }
    return (n);
}