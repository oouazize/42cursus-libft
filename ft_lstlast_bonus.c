/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 21:23:42 by oouazize          #+#    #+#             */
/*   Updated: 2021/11/16 18:40:38 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	if (!ptr)
		return (0);
	while (ptr->next)
		ptr = ptr->next;
	return (ptr);
}
/*int main()
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

	t_list *ptr = ft_lstlast(head);
	printf("%s\n", ptr->content);
}*/
