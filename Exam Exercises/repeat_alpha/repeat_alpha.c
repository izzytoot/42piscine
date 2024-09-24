#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;
    int rep;

    i = 0;
    if (argc != 2)
    {
        write (1, "/n", 1);
    }
    if (argc == 2)
    {
        rep = 0;
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                rep =(argv[1][i] - 'a') + 1;
            }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                rep = (argv[1][i] - 'A') + 1;
            }
            while (rep != 0)
            {
                write (1, &argv[1][i], 1);
                rep --;
            }
            i++;
        }
        write (1, "/n", 1);
    }
    return (0);
}
