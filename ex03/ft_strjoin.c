/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:09:38 by pteh              #+#    #+#             */
/*   Updated: 2023/08/16 15:41:18 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	total_str_len(int size, char **strs)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (i < size)
	{
		temp += ft_strlen(strs[i]);
		i++;
	}
	return (temp);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (original_dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*array;
	int		i;
	int		length;

	length = total_str_len(size, strs) + (ft_strlen(sep) * (size - 1)) + 1;
	if (size == 0)
	{
		array = (char *)malloc(1);
		array[0] = '\0';
		return (array);
	}
	array = (char *)malloc(length * sizeof(char));
	if (array == NULL)
		return (0);
	array[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(array, strs[i]);
		if (i + 1 < size)
			ft_strcat(array, sep);
		i++;
	}
	return (array);
}
/*
   int	main()
   {

   char	*strs[] = {"this", "shit", "complicated", "!"};
   char	*sep = "<<sep>>";
   char	*result = ft_strjoin(4, strs, sep);

   if (result != NULL)
   {
   printf("Concatenated string: %s\n", result);
   free(result);
   }
   else
   printf("Memory allocation failed.\n");
   return (0);
   }*/
