#include <stdio.h>
int main()
{
    int n, a[10], b[10], t[10], w[10], g[10], i, m;
    float att = 0, awt = 0;
    for (i = 0; i < 10; i++)
    {
        a[i] = 0;
        b[i] = 0;
        w[i] = 0;
        g[i] = 0;
    }
    printf("\n\nEnter the number of process:");
    scanf("%d", &n);
    printf("\n\nEnter the Arrival times below according to the process no.\n\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the Arrival time for %d:\n", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\n\nEnter the Burst times below according to the process no.\n\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the Burst time for %d:\n", i + 1);
        scanf("%d", &b[i]);
    }

    g[0] = 0;
    for (i = 0; i < 10; i++)
        g[i + 1] = g[i] + b[i];
    for (i = 0; i < n; i++)
    {
        w[i] = g[i] - a[i];
        t[i] = g[i + 1] - a[i];
        awt = awt + w[i];
        att = att + t[i];
    }
    awt = awt / n;
    att = att / n;
    printf("\nProcess no.\tWaiting time\tTurn arround time\n");
    for (i = 0; i < n; i++)
    {
        printf("P%d\t\t%d\t\t%d\n", i, w[i], t[i]);
    }
    printf("\n\nThe Average waiting time is: %.2f\n", awt);
    printf("\nThe Average turn around time is: %.2f\n", att);
}