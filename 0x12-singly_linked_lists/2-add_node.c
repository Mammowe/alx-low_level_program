#include "lists.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string using recursion
 * @s: pointer that has the address of the string
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	unsigned int i = 0;

	if (*s != 0)
	{
		i = _strlen(s + 1);
		return (++i);
	}
	return(i);
}

/**
 * add_node - adds a new node at the beggining of a list_t list
 * @head: pointer to the list_t list
 * @str: string thatis going to be saved in the list_t list
 * Return: the addressof the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}


