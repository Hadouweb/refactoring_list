#include "list.h"

void		print_data(void *content)
{
	t_data	*data;

	data = (t_data*)content;
	printf("nbr: [%d]\n", data->nbr0);
	printf("nbr: [%d]\n", data->nbr1);
	printf("nbr: [%d]\n", data->nbr2);
	printf("nbr: [%d]\n", data->nbr3);
	printf("nbr: [%d]\n", data->nbr4);
	printf("nbr: [%d]\n", data->nbr5);
	printf("nbr: [%d]\n", data->nbr6);
	printf("nbr: [%d]\n", data->nbr7);
	printf("nbr: [%d]\n", data->nbr8);
	printf("nbr: [%d]\n", data->nbr9);
	printf("str: [%s]\n", data->str);
	printf("\n");
}

t_data		*make_data(int nbr, char *str)
{
	t_data	*data;

	data = (t_data*)malloc(sizeof(t_data));
	bzero(data, sizeof(t_data));
	data->str = strdup(str);
	data->nbr0 = nbr;
	data->nbr1 = nbr;
	data->nbr2 = nbr;
	data->nbr3 = nbr;
	data->nbr4 = nbr;
	data->nbr5 = nbr;
	data->nbr6 = nbr;
	data->nbr7 = nbr;
	data->nbr8 = nbr;
	data->nbr9 = nbr;
	return (data);
}

void		del_data(void *content)
{
	t_data	*data;

	data = (t_data*)content;
	free(data->str);
	data->str = NULL;
	free(data);
}

void		bench_mark_new(int max)
{
	int 	i = 0;
	t_data	*data;
	t_list	*list = NULL;

	while (i < max)
	{
		data = make_data(i, "Hello World");
		ft_list_push_back(&list, &data->link);
		i++;
	}
	//list_print(list->head, print_data);
	//list_del(&list, del_data);
	//list_print(list->head, print_data);
}

#define MAX_SIM 1000000

void		putstr(void *content)
{
	t_str_linked 	*n;

	n = (t_str_linked *)content;
	ft_putstr(n->str);
}

void		free_ptr(void *content)
{
	t_str_linked	*n;

	n = (t_str_linked*)content;
	free(n->str);
	free(n);
}

int 		main(int ac, char **av)
{
	if (ac > 2 && av[1])
	{

	}
	return (0);
}