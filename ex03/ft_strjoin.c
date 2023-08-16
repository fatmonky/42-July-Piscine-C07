/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:09:38 by pteh              #+#    #+#             */
/*   Updated: 2023/08/16 12:05:49 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//write out strlen, to calculate string length.

char	*ft_strjoin(int size, char **strs, char *sep)
{
//concatenate all strings pointed by strs, separated by sep.
//size is no of strings in strs.
//if size is 0, return empty string that you can free() (in main).
	if (size == 0)
		return (NULL);
//figure out how much memory to malloc. this should be:
//	- (length of each string * size) + (length of each sep * (size - 1) + 1 (for null terminator)

int	i;
int	j;
char *mainstring;

i = 0;
j = 0;

//flesh out strcat for two strings, sep and mainstring
while (i < size - 1) 
{
	while (sep[j] != '\0')
	{
		strs[i][strs_len + j] = sep[j]; 
		j++; //need to be 0 for each new sep.
	}
	strs[strs_len + j] = '\0';
	j = 0; // reset j after each.
	i++;
}
//for each str in strs
//and for each sep before null
//add sep to each str in strs.
//add each str to each str.
//add null at the end.

// I tried to do multiple things: looking at Jin Liang's and Nick's code, they had actually created another function to calculate the total str len, before malloc. 
// some used strcpy, others strcat. 

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
