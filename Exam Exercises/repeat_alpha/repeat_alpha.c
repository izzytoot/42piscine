#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	rep;

	if (argc != 2)
    {
        write(1, "\n", 1);
    }
    if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			rep = 1;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				rep = rep + argv[1][i] - 'a';
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				rep = rep + argv[1][i] - 'A';
			while (rep > 0)
			{
				write(1, &argv[1][i], 1);
				rep--;
			}
			i++;
		}
        write(1, "\n", 1);
	}
	return (0);
}
