/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:58:44 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/16 18:18:50 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		*lst = new;
	return ;
}
/*int main()
{
	t_list	*head = NULL;
	t_list *node1 = NULL;
	t_list	*newnode = NULL;

	char *str = ft_strdup("first");
	char *str1 = ft_strdup("second");
	char *str2 = ft_strdup("third");

	head = ft_lstnew(str);
	node1 = ft_lstnew(str1);
	newnode = ft_lstnew(str2);

	head->next = node1;
	node1->next = NULL;
	newnode->next = NULL;

	ft_lstadd_front(&head, newnode);
	while (head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
}*/
