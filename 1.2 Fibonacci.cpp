#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int fib(int n);

main()
{
    cout<<"Enter number :";
    int n;
    cin>>n;
    clock_t t = clock();
    int ans = fib(n);
    t = clock() - t;
    cout<<n<<"th term of fibonacci series is : "<<ans;

    float time_taken = (float)t / CLOCKS_PER_SEC;
    cout << endl
         << "Time taken by algoridhm is :"
         << time_taken << endl;
    return 0;
}

int fib(int n)
{
    if(n <= 1)
    {
        return n;
    }
    else
        return fib(n-1)+fib(n-2);
}