/* Getting the Lenght of the Linked List */
int	len_list(t_list **list)
{
	t_list	*temp;
	int		counter;

	temp = *list;
	counter = 0;
	if (*list != NULL)
	{
		counter = 1;
		while (temp->next != NULL)
		{
			temp = temp->next;
			counter++;
		}
	}
	return (counter);
}