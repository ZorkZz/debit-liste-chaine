void	do_stuff(t_list **lst, int i)
{
	int		*content;
	t_list	*new_node;

	content = malloc(sizeof(int));
	*content = i;
	new_node = ft_lstnew(content);
	ft_lstadd_back(lst, new_node);
}

void	iter_simple(t_list *lst)
{
	while (lst != NULL)
		lst = lst->next;
}

void	iter_double(t_list **lst)
{
	t_list	*cursor;

	cursor = *lst;
	while (cursor != NULL)
	{
		cursor = cursor->next;
	}
}

void	inter_n_times_simple(t_list *lst, int n)
{
	int	i;

	i = 0;
	while (i < n && lst)
	{
		lst = lst->next;
		i++;
	}
}

void	inter_n_times_double(t_list **lst, int n)
{
	int		i;
	t_list	*copy;

	copy = *lst;
	i = 0;
	while (i < n && copy)
	{
		copy = copy->next;
		i++;
	}
}
