#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int serch(long long a[], int n, auto x)
{
    for (auto i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    long long a[100000];

    for (auto i = 0; i < 100000; i++)
    {
        a[i] = i;
    }

    clock_t t = clock();

    auto res = serch(a, 100000, 99999LL);
    ;

    t = clock() - t;

    float time_taken = (float)t / CLOCKS_PER_SEC;
    cout << endl
         << "Time taken by algoridhm is :"
         << time_taken << endl;

    return 0;
}