/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:34:01 by pteh              #+#    #+#             */
/*   Updated: 2023/08/16 11:05:40 by pteh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	arrsize;
	int	*array;
	int	index;
	//function should allocate and assign all values between min (inclusive) and max (excluded)
	//into an array of ints.

	arrsize = max - min;
	array = (int *)malloc(arrsize * sizeof(int));
	index = 0;
	//if min >= max, range points on NULL and return 0.
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	//function should return range (or -1 on error)
	while (index < arrsize)
	{
		if (array == NULL)
			return (-1);
		array[index] = min + index;
		index++;
	}
	*range = array;
	return(arrsize);
}
//15 Aug still: trying to figure out how to test this, before I proceed with this code...
// 16 Aug: testing this out using Jin Liang's test function.

//to comment out before submission, with main.

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
}
