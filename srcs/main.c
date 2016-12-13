#include "../includes/list.h"

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

void		print_data_old(void *content)
{
	t_data_old	*data;

	data = (t_data_old*)content;
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

t_data_old	*make_data_old(int nbr, char *str)
{
	t_data_old	*data;

	data = (t_data_old*)malloc(sizeof(t_data_old));
	bzero(data, sizeof(t_data_old));
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
	t_lst	*list = NULL;

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

void		bench_mark_old(int max)
{
	int 			i = 0;
	t_data_old		*data;
	t_listd_info	*list;

	while (i < max)
	{
		data = make_data_old(i, "Hello World");
		ft_lstd_pushback_alloc(&list, data, sizeof(t_data_old));
		i++;
	}
	//ft_lstd_print(list, print_data_old, 0);
}

#define MAX_SIM 1000000

/*int 		main()
{
	double	time_begin1 = clock();
	bench_mark_new(MAX_SIM);
	double	end_time1 = (clock() - time_begin1) / 1000000.0f;

	double	time_begin2 = clock();
	bench_mark_old(MAX_SIM);
	double	end_time2 = (clock() - time_begin2) / 1000000.0f;

	printf("Pour %d\n", MAX_SIM);
	printf("\tNEW - %f seconds\n", end_time1);
	printf("\tOLD - %f seconds\n", end_time2);

	//list_print(list, print_data);
	return (0);
}*/


/*int 		main()
{
	t_data	*data1 = make_data(42, "Coucou");
	t_data	*data2 = make_data(21, "Hello");
	t_data	*data3 = make_data(7, "Hey");
	t_lst	*list = NULL;
	void	**tab;

	list_push_back(&list, &data1->link);
	list_push_back(&list, &data2->link);

	list_push_before_node(&list, &data1->link, &data3->link);

	list_print(list->head, print_data);
	printf("list size : [%lu]\n", list_size(list));
	tab = list_to_tab(list);

	int i = 0;
	while (tab[i])
	{
		print_data(tab[i]);
		i++;
	}

	free(tab);

	list_del(&list, del_data);

	return (0);
}*/

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
	if (ac > 1)
	{
		t_lst	*list = NULL;

		printf("split this : %s\n", av[1]);
		list = ft_list_str_split(av[1], ' ');
		ft_list_print(list->head, putstr);
		ft_list_del(&list, free_ptr);
	}
	return (0);
}