#include <stdio.h>

struct node
{
    unsigned dist[20];
    unsigned from[20];
} rt[10];

int main()
{
    int dmat[20][20];
    int n, i, j, k, count = 0;

    printf("\nEnter the number of nodes : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter the cost matrix for router %d:\n", i + 1);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &dmat[i][j]);
        }
    }

    // Initialize rt structure
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            rt[i].dist[j] = dmat[i][j];
            rt[i].from[j] = j;
        }
    }

    // Bellman-Ford algorithm
    do
    {
        count = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                for (k = 0; k < n; k++)
                {
                    if (rt[i].dist[j] > rt[i].dist[k] + rt[k].dist[j])
                    {
                        rt[i].dist[j] = rt[i].dist[k] + rt[k].dist[j];
                        rt[i].from[j] = k;
                        count++;
                    }
                }
            }
        }
    } while (count != 0);

    // Print the results as a table
    for (i = 0; i < n; i++)
    {
        printf("\n\nRouting table for router %d:\n", i + 1);
        printf("+-------------+------------+----------+\n");
        printf("| Destination | Next Hop   | Distance |\n");
        printf("+-------------+------------+----------+\n");
        for (j = 0; j < n; j++)
        {
            printf("| %-11d | %-10d | %-8d |\n", j + 1, rt[i].from[j] + 1, rt[i].dist[j]);
        }
        printf("+-------------+------------+----------+\n");
    }

    printf("\n");

    return 0;
}
