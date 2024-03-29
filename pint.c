84 % de l'espace de stockage utilisés … Une fois la limite atteinte, vous ne pouvez plus créer, modifier ni importer de fichiers. Profitez de 100 Go de stockage pour 19,00 MAD 4,75 MAD/mois pendant 3 mois.
#include "monty.h"
/**
 * f_pint - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
