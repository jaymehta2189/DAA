#include <iostream>
#include <string>
#include <chrono>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int a[], int n)
{
    int min = 0, minIndex = 0, j = 0;
    for (int i = 0; i < n; i++)
    {

        min = a[i];
        minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < min)
            {
                min = a[j];
                minIndex = j;
            }
        }
        swap(a[i], a[minIndex]);
    }
}

main()
{
    int a[] = {2, 6, 5, 4, 1, 9, 10, 7, 8, 3};
    clock_t t = clock();

    selectionSort(a, 10);

    t = clock() - t;

    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    float time_taken = (float)t / CLOCKS_PER_SEC;
    cout << endl
         << "Time taken by algoridhm is :"
         << time_taken << endl;
    return 0;
}