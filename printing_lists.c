void	print_stack(t_stack **stack)
{
	t_stack *temp_p;
	
	temp_p = *stack;
	if (*stack == NULL)
		printf("List is Empty\n");
	if (*stack != NULL)
	{	
		while (temp_p->next != NULL)
		{
			printf("%s", "In List: ");
			printf("%d\n", temp_p->value);
			temp_p = temp_p->next;
		}
		printf("%s", "In List: ");
		printf("%d\n", temp_p->value);
	}
}