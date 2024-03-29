84 % de l'espace de stockage utilisés … Une fois la limite atteinte, vous ne pouvez plus créer, modifier ni importer de fichiers. Profitez de 100 Go de stockage pour 19,00 MAD 4,75 MAD/mois pendant 3 mois.
#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
