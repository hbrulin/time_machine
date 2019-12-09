/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrulin <hbrulin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 17:51:30 by hbrulin           #+#    #+#             */
/*   Updated: 2019/12/09 16:07:54 by hbrulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list	*ft_lstnew(float content)
{
	t_list *tmp;

	if (!(tmp = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (tmp)
	{
		tmp->content = content;
		tmp->next = NULL;
	}
	return (tmp);
}
