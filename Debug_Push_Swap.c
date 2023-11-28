#include <stdio.h>

void	ft_check_stk(t_data *data)
{
	int		index;
	t_stack	*ptr;
	t_stack	*ptr2;

	ptr = *data->a;
	ptr2 = *data->b;
	printf("stack a:\n");
	index = 0;
	if (ptr)
	{
		while (ptr->next)
		{
			printf("%d -> %d\n", index, ptr->value);
			index++;
			ptr = ptr->next;
		}
		printf("%d -> %d\n", index, ptr->value);
	}
	printf("stack b:\n");
	index = 0;
	if (ptr2)
	{
		while (ptr2->next)
		{
			printf("%d -> %d\n", index, ptr2->value);
			index++;
			ptr2 = ptr2->next;
		}
		printf("%d -> %d\n", index, ptr2->value);
	}
}
