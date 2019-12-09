#include "header.h"

float	ft_calcul(t_list **lst)
{
	t_list *tmp;
	float total;
	float dec;

	tmp = *lst;
	total = 0;
	dec = 0;
	while (tmp)
	{
		if (dec >= 0.60)
		{
			total += 1;
			dec -= 0.60;
		}
		total += (int)tmp->content;
		dec += tmp->content - (int)tmp->content;
		tmp = tmp->next;
	}
	if (dec >= 0.60)
	{
		total += 1;
		dec -= 0.60;
	}
	total += dec;
	ft_lstclear(&tmp);
	return(total);
}

int main(int argc, char **argv)
{
	float total;
	int index;
	t_list *lst;
	char *period;

	period = argv[1];
	index = 2;
	while (index < argc)
	{
		ft_lstadd_back(&lst, ft_lstnew(atof(argv[index])));
		index++;
	}
	total = ft_calcul(&lst);
	ft_lstclear(&lst);

	FILE* fichier = NULL;
    fichier = fopen("logtime.txt", "a");
	if (fichier != NULL)
    {
        fprintf(fichier, "%s -> %.2f\n", period, total);
		fclose(fichier);
    }
    else
        printf("Impossible d'ouvrir le fichier test.txt");
	printf("Ajoute au logtime : %s -> %.2f\n", period, total);
	return (0);
}
