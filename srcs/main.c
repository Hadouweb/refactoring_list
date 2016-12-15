#include "list.h"

void		print_data(void *content)
{
	t_data	*data;

	data = (t_data*)content;
	ft_tree_info_node(&data->tree, data->str);
	printf("nbr: [%d]\n", data->nbr);
	printf("str: [%s]\n", data->str);
	printf("\n");
}

t_data		*make_data(int nbr, char *str)
{
	t_data	*data;

	data = (t_data*)ft_memalloc(sizeof(t_data));
	data->str = strdup(str);
	data->nbr = nbr;
	return (data);
}

void		print_time(double time_begin)
{
	printf("time : %f\n", (clock() - time_begin) / 1000000);
}

int 		main()
{
	t_data		*data1 = make_data(1, "Coucou");
	t_data		*data2 = make_data(2, "Bonjour");
	t_data		*data3 = make_data(3, "This");
	t_data		*data4 = make_data(4, "Hello");
	t_data		*data5 = make_data(5, "LOL");

	t_tree		*root = NULL;
	t_list		*list = NULL;

	if (list && root)
		;

	ft_list_push_back(&list, &data1->link);
	ft_list_push_back(&list, &data2->link);
	ft_list_push_back(&list, &data3->link);
	ft_list_push_back(&list, &data4->link);
	ft_list_push_back(&list, &data5->link);

	ft_tree_add(&data1->tree, TREE_LEFT, &data2->tree);
	ft_tree_add(&data1->tree, TREE_RIGHT, &data3->tree);
	ft_tree_add(&data2->tree, TREE_LEFT, &data4->tree);
	ft_tree_add(&data2->tree, TREE_RIGHT, &data5->tree);

	ft_putendl("****************** TREE ******************");
	ft_tree_inorder(&data1->tree, print_data);
	ft_putendl("****************** LIST ******************");
	//ft_list_print(list->head, print_data);

	t_tree *tree = NULL;
	double	time_begin = clock();
	for (long i = 0; i < 1; i++) {
		tree = (t_tree *)(t_data*)((char*)data1 - (char*) &((t_data*)0)->tree);
		//print_data(tree->left);
	}
	print_time(time_begin);
	if (tree)
		;
	return (0);
}