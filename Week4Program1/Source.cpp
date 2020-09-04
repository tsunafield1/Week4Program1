#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char a;
    int n, m, x;
    scanf("%d %d", &n, &m);
    int b[20][20];
    for (int i = 0; i < n; i++)
    {
        getchar();
        for (int j = 0; j < m; j++)
        {
            scanf("%c", &a);
            if (a == '.')b[i][j] = 0;
            else if (a == 'O')b[i][j] = 1;
        }
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &x);
        for (int k = 1; k <= x; k++)
        {
            for (int j = 0; j < n; j++)
            {
                if (b[j][i] != 0)
                {
                    if (j == 0)break;
                    b[j - 1][i] = 2;
                    break;
                }
                else if (j == n - 1)b[j][i] = 2;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[i][j] == 0)printf(".");
            else if (b[i][j] == 1)printf("O");
            else printf("#");
        }
        printf("\n");
    }
}
