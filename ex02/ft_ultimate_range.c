/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pteh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:34:01 by pteh              #+#    #+#             */
/*   Updated: 2023/08/15 17:57:08 by pteh             ###   ########.fr       */
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
	return(arrsize);//15 Aug evening: this is a bit confusing. ft_range returns a ptr to an array, but this returns a int of array size. I'm a bit tired, so not making sense in my mind.
}
//15 Aug still: trying to figure out how to test this, before I proceed with this code...

//to comment out before submission, with main.
void	print_array(int* arr, int max, int min)
{
	int* array = arr;
	int i = 0;

	while (i < (max - min))
	{
		printf("%d, ", array[i]);
		i++;
	}
}

int	main(void)
{
	int	min = -22;
	int	max = 120; 
	int **range = NULL;

	int array1 = ft_ultimate_range(range,min,max);
	printf("array1 =  ft_ultimate_range(-22, 120) : ");
	print_array(*range, max, min);
	free(*range);
}
