#ifndef HEADER_H
# define HEADER_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef	struct		s_list
{
	float			content;
	struct s_list	*next;
}					t_list;

void	ft_lstadd_back(t_list **alst, t_list *new);
t_list	*ft_lstnew(float content);
void	ft_lstclear(t_list **lst);

#endif
