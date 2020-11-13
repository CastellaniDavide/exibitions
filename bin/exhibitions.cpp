/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <bits/stdc++.h>
using namespace std;

// constraints
#define MAXN 100000

// input data
int N, M, i;
int A[MAXN], P[MAXN], G[MAXN], E[MAXN];

int gatto_min, gatto_max, cane_min, cane_max;
int reputazione;

int main() {
/*
    uncomment the following lines if you want to read/write from files*/
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


    assert(2 == scanf("%d %d", &N, &M));
    for (i=0; i<M; i++)
        assert(1 == scanf("%d", &E[i]));
    for (i=0; i<N; i++)
        assert(3 == scanf("%d %d %d", &A[i], &P[i], &G[i]));

    // insert your code here
    cane_max = INT_MIN;
    cane_min = INT_MAX;
    gatto_max = INT_MIN;
    gatto_min = INT_MAX;
    for (int i = 0; i < N; ++i)
    {
        if (P[i] == 0)
        {
            if (A[i] > cane_max)
                cane_max = A[i];

            if (A[i] < cane_min)
                cane_min = A[i];
        }
        else
        {
            if (A[i] > gatto_max)
                gatto_max = A[i];

            if (A[i] < gatto_min)
                gatto_min = A[i];
        }
    }

    for (i=0; i<M; i++) {

        reputazione = A[E[i]];

        if (G[E[i]] == 0)
        {
            if (P[E[i]] == 0)
            {
                printf("%d ", 0);
            }
            else
            {
                if (A[E[i]] > cane_max)
                    printf("%d ", 1);
                else
                    printf("%d ", 0);
            }
        }
        else
        {
            if (P[E[i]] == 1)
            {
                printf("%d ", 1);
            }
            else
            {
                if (A[E[i]] > gatto_max)
                    printf("%d ", 0);
                else
                    printf("%d ", 1);
            }
        }

         // change 42 with actual answer for i-th group
    }
    printf("\n");
    return 0;
}
