/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:14:58 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/19 11:10:53 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*new;

	ptr = NULL;
	if (!f)
		return (0);
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&ptr, del);
			lst = NULL;
			return (0);
		}
		ft_lstadd_back(&ptr, new);
		lst = lst->next;
	}
	return (ptr);
}
/*void	f(void *str)
{
	int i;

	i = 0;
	while (((char *)str)[i])
		((char *)str)[i++] -= 32;
}
#include <stdio.h>
int main()
{
	t_list	*head = NULL;
	t_list *node1 = NULL;
	t_list	*node2 = NULL;

	char *str = ft_strdup("first");
	char *str1 = ft_strdup("second");
	char *str2 = ft_strdup("third");

	head = ft_lstnew(str);
	node1 = ft_lstnew(str1);
	node2 = ft_lstnew(str2);

	head->next = node1;
	node1->next = node2;
	node2->next = NULL;

	ft_lstmap(head, f, free);
	while (head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
}*/
