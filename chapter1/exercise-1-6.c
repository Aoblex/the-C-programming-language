#include <stdio.h>

int main()
{
    for (int status = (getchar() != EOF); status != EOF; status = (getchar() != EOF))
    {
        printf("(getchar() != EOF) = %d\n", status);
    }
    return 0;
}