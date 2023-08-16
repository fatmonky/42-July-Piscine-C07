/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:34:01 by pteh              #+#    #+#             */
/*   Updated: 2023/08/16 11:09:25 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	arrsize;
	int	*array;
	int	index;

	arrsize = max - min;
	array = (int *)malloc(arrsize * sizeof(int));
	index = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	while (index < arrsize)
	{
		if (array == NULL)
			return (-1);
		array[index] = min + index;
		index++;
	}
	*range = array;
	return (arrsize);
}

/*
int	main(void)
{
	int	min = -22;
	int	max = 120; 
	int	size; 
	int *range = NULL;

	size = ft_ultimate_range(&range,min,max);
	for (int i = 0; i < size; i++)
		printf("array1[%d] for -22, 120 : [%d]\n", i, range[i]);
	free(range);
}*/
