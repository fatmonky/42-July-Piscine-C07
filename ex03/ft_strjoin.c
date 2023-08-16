/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:09:38 by pteh              #+#    #+#             */
/*   Updated: 2023/08/16 14:09:21 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//write out strlen, to calculate string length.
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
	return (original_dest); //this might not be what I want here. 
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*array;
//concatenate all strings pointed by strs, separated by sep.
//size is no of strings in strs.
//if size is 0, return empty string that you can free() (in main).
	if (size == 0)
		return (NULL);
//figure out how much memory to malloc. this should be:
//	- (length of each string * size) + (length of each sep * (size - 1) + 1 (for null terminator)
	array = (char *)malloc((total_str_len(size, strs) + (ft_strlen(sep) * (size - 1)) + 1) * sizeof(char));


int	i;
char	**temp;

i = 0;
while (i < size) 
{
	//while (j < ft_strlen(strs[i])
	//{
	strs[i] = ft_strcat(strs[i], sep);
	i++;
}
i = 0;
while (i < size)
{
	temp[i] = ft_strcat(strs[i], strs[i+ 1]);
}
array = *temp;
//for each str in strs
//and for each sep before null
//add sep to each str in strs.
//add each str to each str.
//add null at the end.

// I tried to do multiple things: looking at Jin Liang's and Nick's code, they had actually created another function to calculate the total str len, before malloc. 
// some used strcpy, others strcat. 
	return (array);
}

int	main(int argc, char** argv)
{
	char *mainstring;
	char *sep = "@!$#";
	mainstring = ft_strjoin(argc, argv,sep);
	if (argc > 1)
		printf("%s\n",mainstring);
	free(mainstring);
	return (0);
}
