#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int fact(int n);

main()
{
    cout<<"Enter number \n";
    int n;
    cin>>n;
    clock_t t = clock();
    int ans = fact(n);
    t = clock() - t;

    cout<<"Factorial of "<<n<<" is "<<ans<<endl;

    float time_taken = (float)t / CLOCKS_PER_SEC;
    cout << endl
         << "Time taken by algoridhm is :"
         << time_taken << endl;
    return 0;
}

int fact(int n)
{
    if(n == 1 || n == 0)
        return 1;

    return n*fact(n-1);
}