#include <iostream>
#include <string>
#include <time.h>
using namespace std;

static int count = 0;

void hanoi(int n,char source,char destination,char auxiliary)
{
    if(n!=1)
    {
        hanoi(n-1,source,auxiliary,destination);

    }
    count++;
    printf("%d : %c -> %c\n",count,source,destination);
    if(n!=1)
    {
        hanoi(n-1,auxiliary,destination,source);

    }
}

main()
{
    clock_t t = clock();
    hanoi(3,'A','C','B');
    t = clock() - t;

    float time_taken = (float)t / CLOCKS_PER_SEC;
    cout << endl
         << "Time taken by algoridhm is :"
         << time_taken << endl;
    return 0;
}