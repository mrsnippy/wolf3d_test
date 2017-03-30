/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmurovts <dmurovts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 12:45:23 by dmurovts          #+#    #+#             */
/*   Updated: 2016/12/05 13:11:26 by dmurovts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	size_t	i;
	t_list	*lst;

	i = 0;
	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	if (!content)
	{
		lst->content = NULL;
		lst->content_size = 0;
	}
	else
	{
		lst->content = (void *)malloc(content_size);
		while (i < content_size)
		{
			((char *)lst->content)[i] = ((char *)content)[i];
			i++;
		}
		lst->content_size = content_size;
	}
	lst->next = 0;
	return (lst);
}
