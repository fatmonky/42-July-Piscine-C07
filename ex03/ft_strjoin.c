












#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
//concatenate all strings pointed by strs, separated by sep.
//size is no of strings in strs.
//if size is 0, return empty string that you can free() (in main).


}

int	main(int argc, char** argv)
{
	char *mainstring;
	char *sep = "@!$#";
	mainstring = ft_strjoin(argc, argv,se);
	if (argc > 1)
		printf("%s\n",mainstring);
	free(mainstring);
	return (0);
}
