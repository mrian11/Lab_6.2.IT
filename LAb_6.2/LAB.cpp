#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int* create(int n, const int Low, const int High) 
{
    int* a = new int[n];
    for (int i = 0; i < n; i++) 
    {
        a[i] = Low + rand() % (High - Low + 1);
    }
    return a;
}

int Max(int* a, const int size)
{
    int max = a[0];
    for (int i = 1; i < size; i++)  
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int Min(int* a, const int size)
{
    int min = a[0];
    for (int i = 1; i < size; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}

void print(int* a, int n)
{
    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << setw(5) << a[i];
    }
    cout << endl;
}

double calculateAverage(int* a, const int size)
{
    if (size == 0)
    {
        return 0.0; 
    }
    int min = a[0];
    int max = a[0];
    for (int i = 1; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    return static_cast<double>(min * 1.0 + max * 1.0) / 2;
}

int main() 
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    srand((unsigned)time(NULL));
    int Low = 1;
    int High = 100;

    int* a = create(n, Low, High);
    print(a, n);

    double average = calculateAverage(a, n);
    cout << "Average of elements: " << average << endl;
    cout << "max = " << Max(a, n) << endl;
    cout << "min = " << Min(a, n) << endl;
    delete[] a; // Звільнення пам'яті

    return 0;
}
