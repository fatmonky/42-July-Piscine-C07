/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:50:27 by pteh              #+#    #+#             */
/*   Updated: 2023/08/14 16:43:25 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*new_str;
	char	*new_str_hd;

	src_len = ft_strlen(src);
	new_str = malloc((src_len + 1) * sizeof(char));
	if (new_str == NULL)
		return (0);
//	printf("initial new_str:%p\n",new_str);
	new_str_hd = new_str;
	while (*src != '\0')
	{
		*new_str = *src;
		src++;
		new_str++;
//	printf("src:%p\n",src);
//	printf("iwhile new_str:%p\n",new_str);
	}
	new_str++;
	*new_str = '\0';
//	printf("end new_str:%p\n",new_str);
	return(new_str_hd);
}
/*
int	main(void)
{
	char *string1 = "Hello";
	char *string2;
	char *string3;

	string2 = strdup(string1);
	string3 = ft_strdup(string1);
	printf("string1 address:%p\n",string1);
	printf("(strdup)duplicate string address:%p\n",string2);
	printf("(strdup)duplicated string: %s\n", string2);
	printf("(ft_strdup)duplicate string address:%p\n",string3);
	printf("(ft_strdup)duplicated string: %s\n", string3);
	free(string2);
	free(string3);
}*/
