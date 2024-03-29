84 % de l'espace de stockage utilisés … Une fois la limite atteinte, vous ne pouvez plus créer, modifier ni importer de fichiers. Profitez de 100 Go de stockage pour 19,00 MAD 4,75 MAD/mois pendant 3 mois.
#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
